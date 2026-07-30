# 🗑️ Smart Trash Bin with Arduino

An automatic smart trash bin built with **Arduino Uno**, **HC-SR04 Ultrasonic Sensor**, and a **Servo Motor**. The lid opens automatically when a hand or object is detected and closes after a few seconds, providing a touch-free and hygienic waste disposal solution.

---

## 📷 Project Preview

> Add your project image here.

![Smart Trash Bin](images/smart-trash-bin.jpg)

---

## 🎥 Demo Video

Watch the complete tutorial on YouTube:

https://www.youtube.com/@UK-Robotics

---

# ✨ Features

- Automatic lid opening
- Touch-free operation
- Ultrasonic object detection
- Servo motor control
- Beginner-friendly Arduino project
- Ideal for STEM and robotics education

---

# 🛠️ Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires
- Breadboard
- USB Cable

---

# 🔌 Circuit Diagram

![Circuit Diagram](images/circuit-diagram.png)

---

# 🔗 Wiring

## HC-SR04

| Sensor Pin | Arduino Uno |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | A0 |
| ECHO | A1 |

## Servo Motor

| Servo Wire | Arduino Uno |
|------------|-------------|
| Signal | D2 |
| VCC | 5V |
| GND | GND |

---

# ⚙️ How It Works

1. The ultrasonic sensor continuously measures the distance.
2. Arduino checks if an object is within **20 cm**.
3. If an object is detected, the servo rotates **90°** to open the lid.
4. The lid remains open for **3 seconds**.
5. The servo returns to **0°**, closing the lid automatically.
6. The process repeats continuously.

---

# 📁 Project Structure

```
Smart-Trash-Bin/
│
├── Arduino_Code/
│   └── SmartTrashBin.ino
│
├── images/
│   ├── smart-trash-bin.jpg
│   ├── circuit-diagram.png
│   └── demo.gif
│
├── LICENSE
└── README.md
```

---

# 🚀 Getting Started

1. Assemble the circuit.
2. Connect the Arduino Uno.
3. Upload the Arduino sketch.
4. Open the Serial Monitor (optional).
5. Test the ultrasonic sensor.
6. Bring your hand within 20 cm.
7. The lid opens automatically and closes after 3 seconds.

---

# 📚 Applications

- Smart Home
- Contactless Waste Bin
- School STEM Projects
- Arduino Learning
- Robotics Education
- Automation Projects

---

# 💻 Arduino Libraries

Install the following library before uploading the code:

- Servo (Built into Arduino IDE)

---

# 📄 License

This project is licensed under the MIT License.

---

# ⭐ Support

If you found this project useful:

⭐ Star this repository

🍴 Fork this project

📺 Subscribe to my YouTube channel

---

# 👨‍💻 Author

**UK Robotics**

GitHub:
https://github.com/kadirogluumut

YouTube:
https://youtube.com/@UK-Robotics
