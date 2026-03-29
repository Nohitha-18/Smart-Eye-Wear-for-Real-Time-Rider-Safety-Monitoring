# Smart-Eye-Wear-for-Real-Time-Rider-Safety-Monitoring

## 📌 Overview
This project focuses on developing a wearable smart eyewear system to improve motorcycle rider safety. It detects drowsiness and alcohol consumption in real time and alerts the rider in case of unsafe conditions.

---

## 🎯 Objective
- Detect drowsiness using eye-blink monitoring  
- Detect alcohol levels from breath  
- Provide real-time alert system  
- Develop a low-cost safety solution  

---

## ⚙️ Components Used
- Arduino Nano  
- IR Eye-Blink Sensor  
- MQ-7 Gas Sensor  
- RF Transceiver Module  
- Buzzer  
- Power Supply  
- Connecting wires  

---

## 🧠 Working Principle
The system uses an IR eye-blink sensor to detect eye closure and an MQ-7 sensor to measure alcohol concentration in breath. These sensors provide analog inputs to the Arduino Nano.

The Arduino processes these inputs and compares them with predefined threshold values. If drowsiness or alcohol is detected, an alert is triggered using a buzzer.
<img width="1024" height="1536" alt="block_diagram1" src="https://github.com/user-attachments/assets/9e13abd2-f541-4722-8d01-e713575690c2" />

---

## 🔄 System Flow
IR Sensor / MQ-7 Sensor → Arduino Nano → Threshold Decision → Alert (Buzzer)

---

## 📷 System Design / Simulation
![hardware_prototype](https://github.com/user-attachments/assets/b2465064-831d-4b8f-992b-d33ae9a46980)


---

## 💻 Code
The complete Arduino code for this project is available in the repository file:

👉 `smart_eyewear.ino`

---

## 🧪 Methodology
- Interfaced sensors with Arduino Nano  
- Implemented threshold-based detection logic  
- Calibrated MQ-7 sensor for alcohol detection  
- Tested system under different conditions  

---

## 📊 Results
- Successful detection of drowsiness conditions  
- Alcohol detection with acceptable accuracy  
- Minimal false alarms under normal conditions  
- Stable performance in different environments  

---

## 🛠️ My Contribution
- Hardware connections and circuit setup  
- Sensor interfacing with Arduino  
- Assisted in testing and calibration  
- Participated in debugging  

---

## ⚠️ Limitations
- Fixed threshold values  
- MQ-7 sensor requires calibration  
- No automatic vehicle control  

---

## 🚀 Future Scope
- Machine learning-based detection  
- Mobile app integration  
- GPS-based alert system  
- Compact PCB design  

---

## 📚 References
- Arduino Documentation    
- Research papers on drowsiness detection  
