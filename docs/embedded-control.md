# Embedded Control

## Transmitter

### Inputs

| Signal | Arduino pin | Range |
|---|---:|---:|
| Throttle | A0 | 0–1023 |
| Steering | A1 | 0–1023 |

The loop sends one packet and then waits approximately 20 ms.

Nominal loop period is therefore about 50 Hz, excluding radio transmission and serial-print timing.

## Receiver

### Outputs

| Function | Arduino pin |
|---|---:|
| Steering servo | D2 |
| IBT-2 direction/PWM output 1 | D6 |
| IBT-2 direction/PWM output 2 | D5 |

### Steering mapping

```text
0–1023  →  0–180°
```

### Throttle mapping

```text
0–1023  →  -255…+255
```

A deadband of ±15 is applied around zero.

Positive command:

```text
D6 = PWM
D5 = 0
```

Negative command:

```text
D6 = 0
D5 = PWM magnitude
```

Zero/deadband:

```text
D6 = 0
D5 = 0
```

## Known limitations

The V1 firmware is intentionally simple. It does not yet implement:

- radio-loss failsafe
- heartbeat timeout
- packet sequence numbers
- CRC/application-level validation
- command saturation beyond the `map()` range
- steering calibration
- motor-current feedback
- encoder feedback
- closed-loop speed control
