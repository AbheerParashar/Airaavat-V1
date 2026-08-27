# Design Decisions

This document records **why** the V1 architecture was selected.

## Arduino UNO

Chosen as a practical embedded-control platform for rapid prototyping, straightforward GPIO/ADC access and a large ecosystem.

## nRF24L01

Chosen for a lightweight, low-cost wireless control link suitable for a prototype where the objective was to learn RF-controlled embedded systems.

## Brushed DC drivetrain

Chosen because it provides a comparatively simple route to physical propulsion control and allows experimentation with gearing, torque delivery and motor-driver control.

## Jackshaft + chain reduction

Chosen to make a large overall reduction achievable through multiple stages while allowing the drivetrain geometry to be physically packaged and iterated.

## Ackermann steering

Chosen because the platform is a wheeled ground vehicle and Ackermann geometry provides a mechanically intuitive steering architecture for a car-like UGV.

## Why build V1 manually?

The objective was not merely to assemble a kit. Manual fabrication forces direct interaction with mechanical tolerances, structural stiffness, alignment, fastening, power transmission and failure modes.

## What V1 taught

The central lesson is systems integration: a working robot is not one component. Mechanical, electrical, embedded, RF, power and control decisions interact continuously.
