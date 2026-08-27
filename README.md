🐘 Featured Project — Project Airaavat

A hardware-first UGV platform evolving toward autonomous systems.

Airaavat-V1 is a functional ground vehicle through which I've worked across electric drivetrain design, mechanical fabrication, Li-ion power systems, embedded control and RF communication.

[Explore Airaavat-V1 →]

# Project Airaavat — V1

**Hardware-first UGV platform for experimentation in electric mobility, embedded control and autonomous systems.**

Project Airaavat-V1 is a ground vehicle prototype built to learn and validate systems engineering through physical implementation rather than simulation alone.

## What V1 demonstrates

- Custom mechanical chassis fabrication and iteration
- Brushed-DC electric drivetrain
- Jackshaft and sprocket-chain reduction
- Ackermann steering
- Custom Li-ion battery-pack construction with off-the-shelf BMS protection
- Arduino-based embedded control
- nRF24L01 wireless command link
- Joystick-based throttle and steering
- IBT-2 motor-driver interface
- Physical ground-trial validation under load

## V1 control architecture

```text
                    TRANSMITTER
              +---------------------+
Joystick ---->| Arduino UNO         |
Throttle A0   |                     |
Steering A1   |      nRF24L01       |
              +----------+----------+
                         |
                    2.4 GHz RF
                         |
              +----------v----------+
              | Arduino UNO         |  RECEIVER
              |                     |
              | nRF24L01            |
              +----+-----------+----+
                   |           |
             PWM motor     Servo command
              control       (Ackermann)
                   |           |
                IBT-2       Steering
                   |
              Drive motor
```

## Repository structure

```text
src/
  TX/   # as-built transmitter firmware
  RX/   # as-built receiver firmware

docs/
  architecture.md
  mechanical.md
  electrical.md
  embedded-control.md
  testing.md
  design-decisions.md

media/
  # project photographs, diagrams and trial footage references
```

## Important: as-built firmware

The firmware in `src/TX` and `src/RX` is the code supplied by the project author as the V1 implementation.

It is intentionally preserved as an **as-built record**. It should not be silently replaced with a "better" or safety-hardened version because doing so would make the repository less useful as an engineering record.

A separate future branch/version can introduce improvements such as:

- RF-loss failsafe
- watchdog timeout
- constrained steering limits
- smoother throttle mapping
- packet validation
- explicit motor-braking behaviour
- telemetry
- emergency-stop logic

## Current development direction

Airaavat is intended to evolve from a manually controlled UGV toward a sensorized robotic platform. Future work may include an ESP32-based architecture, IMU integration, sensor fusion, obstacle detection, ROS 2 integration and autonomous navigation.

Planned capabilities are **not represented as completed V1 capabilities**.

## Author

**Abheer Parashar**  
Electrical Engineering | Embedded Systems | Electric Powertrain | Robotics

LinkedIn: [https://www.linkedin.com/in/abheer-parashar-752b9338a/]  
GitHub: [https://github.com/AbheerParashar]

> This repository is an engineering record and portfolio of Project Airaavat.
