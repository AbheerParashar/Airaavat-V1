#include <SPI.h>
#include <RF24.h>

RF24 radio(9,10);

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

  radio.begin();
  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_250KBPS);
  radio.openWritingPipe(address);
  radio.stopListening();
}

void loop()
{
  data.throttle = analogRead(A0);
  data.steering = analogRead(A1);

  radio.write(&data,sizeof(data));

  Serial.print("Throttle: ");
  Serial.print(data.throttle);
  Serial.print(" Steering: ");
  Serial.println(data.steering);

  delay(20);
}
