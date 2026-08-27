# Airaavat-V1
### Autonomous Unmanned Ground Vehicle

**Status: Active Development — Phase I (Motor Control)**
**Developer: Abheer Parashar**
**Institution: D.N. Polytechnic, Meerut | Electrical Engineering**

---

## Objective

Airaavat-V1 is an indigenous autonomous UGV designed for
reconnaissance and navigation applications. The project
serves as the technical foundation for Airaavat Defence,
Mobility and Energy Systems Ltd.

**Core capabilities (target):**
- Closed-loop DC motor control (encoder + PID)
- Ultrasonic and IR-based obstacle avoidance
- Autonomous path navigation
- Modular, field-serviceable chassis design

---

## System Architecture
[ Sensor Array ] → [ Microcontroller ] → [ Motor Driver ]
Ultrasonic IR Arduino/STM32 H-Bridge PWM
↓
[ Encoder Feedback ]
[ PID Controller ]


---

## Development Roadmap

| Phase | Milestone | Status |
|-------|-----------|--------|
| I | DC motor closed-loop control | 🔄 In Progress |
| II | Sensor integration (ultrasonic + IR) | ⏳ Pending |
| III | Autonomous navigation algorithm | ⏳ Pending |
| IV | Chassis fabrication + full integration | ⏳ Pending |
| V | Field testing + documentation | ⏳ Pending |

---

## Technical Stack

- **Microcontroller:** Arduino Mega / STM32 (TBD)
- **Motor Control:** H-Bridge, PWM, Encoder feedback
- **Sensors:** HC-SR04 Ultrasonic, IR proximity
- **Design Software:** SolidWorks, Proteus (simulation)
- **Languages:** C/C++, Python

---

## Documentation

- `/docs` — Design notes, circuit diagrams, calculations
- `/hardware` — Component specifications and wiring diagrams
- `/firmware` — Microcontroller code (updated as developed)

---

## About the Builder

First-year Electrical Engineering student building
defence-grade systems from a hostel room in Meerut.
Acknowledged by engineers from Blue Origin, ex-Koenigsegg,
ex-Rolls Royce, and Drivecore Mobility.

*This is not a college project. This is a foundation.*

---

**LinkedIn:** [Abheer Parashar](https://www.linkedin.com/in/abheer-parashar-752b9338a/)

© 2026 Abheer Parashar. All Rights Reserved. 
Unauthorised use, reproduction or distribution of any 
part of this project is strictly prohibited.
