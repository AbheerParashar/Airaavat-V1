#include <SPI.h>
#include <RF24.h>
#include <Servo.h>

RF24 radio(9,10);

Servo steeringServo;

const byte address[6] = "00001";

struct Data
{
  int throttle;
  int steering;
};

Data data;

void setup()
{
  Serial.begin(9600);

  steeringServo.attach(2);

  radio.begin();
  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_250KBPS);

  radio.openReadingPipe(0,address);
  radio.startListening();

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  if(radio.available())
  {
    radio.read(&data,sizeof(data));

    int servoAngle = map(data.steering,0,1023,0,180);
    steeringServo.write(servoAngle);

    int pwm = map(data.throttle,0,1023,-255,255);

    if(pwm>15)
    {
      analogWrite(6,pwm);
      analogWrite(5,0);
    }
    else if(pwm<-15)
    {
      analogWrite(6,0);
      analogWrite(5,-pwm);
    }
    else
    {
      analogWrite(6,0);
      analogWrite(5,0);
    }

    Serial.print("Throttle: ");
    Serial.print(data.throttle);

    Serial.print(" Steering: ");
    Serial.println(data.steering);
  }
}
