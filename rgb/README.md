# 04 - RGB LED with Arduino

## 📌 Project Description

This project demonstrates how to control an RGB LED using an Arduino Uno. The RGB LED is used to display different colors by controlling the Red, Green, and Blue pins individually.

## 🛠️ Components Required

- Arduino Uno
- RGB LED
- 3 × 220Ω Resistors
- Breadboard
- Jumper Wires

## 🔌 Circuit

The circuit connection diagram is available in the `rgb_led_circuit.png` file.

### Pin Connections

- Red Pin → Arduino Digital Pin 9
- Green Pin → Arduino Digital Pin 10
- Blue Pin → Arduino Digital Pin 11
- Common Pin → GND

A 220Ω resistor is connected to each Red, Green, and Blue pin.

## 💻 Arduino Code

The Arduino source code is available in the `rgb_led.ino` file.

The program controls the RGB LED by switching the Red, Green, and Blue pins between HIGH and LOW states.

## 🎥 Project Demo

The working demonstration video is available in the `rgb_led_demo.mp4` file.

## ⚙️ Working

The RGB LED contains three LEDs inside one package:

- Red
- Green
- Blue

By controlling each color individually, different colors can be produced.

The project demonstrates the following sequence:

🔴 Red → 🟢 Green → 🔵 Blue

## 📂 Project Files

```text
04-RGB-LED
│
├── rgb_led_circuit.png
├── rgb_led.ino
├── rgb_led_demo.mp4
└── README.md