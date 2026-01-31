# Smart Door Access and Intrusion Detection System

## 📌 Project Overview
This project implements a **basic smart security system** using an Arduino. It monitors the **door status** and **motion inside a restricted area**, then provides visual feedback using LEDs. The system simulates real-world access control and intrusion detection concepts commonly used in embedded systems and IoT security applications.

## 🎯 System Objectives
- Detect whether a door is **open or closed**
- Detect **motion** using a PIR sensor
- Indicate system status using LEDs:
  - Green LED → Normal condition (door closed)
  - Red LED → Alarm condition (motion detected while door is open)
- Output real-time status updates to the **Serial Monitor**

## 🧰 Components Used
- Arduino Uno (or compatible board)
- Slide switch (to simulate door open/close)
- PIR Motion Sensor
- Green LED (Normal Status Indicator)
- Red LED (Alarm Indicator)
- 2 × 220Ω resistors
- Breadboard
- Jumper wires

## 🔌 Pin Configuration

| Component          | Arduino Pin |
|--------------------|-------------|
| Door Switch        | Pin 2       |
| PIR Motion Sensor  | Pin 3       |
| Green LED          | Pin 4       |
| Red LED            | Pin 5       |

## ⚙️ System Logic
- Door Closed → Green LED ON, Red LED OFF
- Door Open + Motion Detected → Red LED ON
- Door Open + No Motion → All LEDs OFF

## 🖥️ Serial Monitor Output
The system prints real-time status messages for monitoring and debugging.

## ▶️ How to Run
1. Connect the components correctly
2. Upload the Arduino sketch
3. Open Serial Monitor (9600 baud)
4. Test by toggling the switch and triggering the PIR sensor

## 🚀 Future Enhancements
- Add buzzer for audible alarm
- Add LCD or IoT connectivity
- Implement keypad-based access control

## 👨‍💻 Authors
Subeko Pio(kizito), mwesigwe Arnold, ampumuza racheal, emmanuel tombe
