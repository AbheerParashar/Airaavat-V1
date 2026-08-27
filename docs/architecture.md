# System Architecture

## 1. High-level architecture

Airaavat-V1 uses a two-node wireless control architecture:

1. A transmitter Arduino reads the operator joystick.
2. The transmitter packages throttle and steering values into a small C/C++ structure.
3. An nRF24L01 radio sends the structure wirelessly.
4. The receiver Arduino reads the packet.
5. Steering is converted to a servo angle.
6. Throttle is converted into signed PWM magnitude and direction.
7. The IBT-2 receives the two directional PWM signals.

## 2. RF parameters

- Radio library: RF24
- CE pin: D9
- CSN pin: D10
- Data rate: 250 kbps
- PA level: LOW
- Pipe address: `00001`

## 3. Data packet

```cpp
struct Data
{
  int throttle;
  int steering;
};
```

The transmitter sends two 10-bit ADC readings:

- `throttle`: A0, 0–1023
- `steering`: A1, 0–1023

The receiver maps them independently.

## 4. Engineering note

The V1 implementation has no explicit RF-loss timeout. If packets stop arriving, the receiver does not actively command the motor outputs to zero. This is a known safety/design limitation and should be addressed before using a future autonomous or higher-power revision.
