# alcohol_detection-

🚗 Alcohol Detection System

Using MQ-3 Sensor & Arduino Nano


---

# 📌 Project Description

This project implements a real-time alcohol detection system using the MQ-3 alcohol sensor interfaced with an Arduino Nano.

The system detects alcohol vapors in breath and classifies them into three levels:

🟢 Safe

🟡 Warning

🔴 Danger (Red LED + Buzzer Alert)


It includes sensor calibration, noise reduction through averaging, and a manual alert-disable switch.


---

## 🎯 Objectives

Detect alcohol vapors using MQ-3 sensor

Perform proper sensor calibration

Categorize readings into multiple safety levels

Provide visual and audible alerts

Improve stability using averaging technique

Implement switch-based alert control



---

## 🛠️ Hardware Components

Component	Quantity

Arduino Nano	1
MQ-3 Alcohol Sensor Module	1
Green LED	1
Yellow LED	1
Red LED	1
220Ω Resistors	3
Active Buzzer (5V)	1
Push Button Switch	1
Breadboard	1
Jumper Wires	As required



---

## 🔌 Pin Configuration

MQ-3 Connections

MQ-3 Pin	Arduino Nano

VCC	5V
GND	GND
AO	A0



---

Output Connections

Device	Pin

Green LED	D2
Yellow LED	D3
Red LED	D4
Buzzer	D5
Switch	D6



---

## ⚙️ System Architecture

🔷 Block Diagram

Alcohol Vapors
             ↓
      +----------------+
      |   MQ-3 Sensor  |
      +----------------+
             ↓
       Analog Output (A0)
             ↓
      +----------------+
      |  Arduino Nano  |
      +----------------+
       ↓      ↓      ↓
   Green   Yellow   Red + Buzzer


---

## 🔄 Program Flowchart

Start
  ↓
Initialize Pins & Serial
  ↓
Warm-up Sensor
  ↓
Read Analog Value
  ↓
Average Readings
  ↓
Compare with Thresholds
  ↓
Safe? → Green LED
Warning? → Yellow LED
Danger? → Red LED + Buzzer
  ↓
Check Switch State
  ↓
Repeat


---

## 🔬 Calibration Process

Calibration ensures accurate threshold selection.

Step 1: Warm-Up

Power sensor and wait 2–5 minutes.

Step 2: Measure Baseline

Record clean air value using Serial Monitor.

Example:

Baseline ≈ 200

Step 3: Measure Alcohol Exposure

Expose to sanitizer vapors.

Example:

Peak ≈ 750

Step 4: Set Thresholds

TH_LOW = 300
TH_HIGH = 600


---

## 📊 Detection Logic

Sensor Value	Status	Action

< TH_LOW	Safe	Green LED ON
TH_LOW – TH_HIGH	Warning	Yellow LED ON
≥ TH_HIGH	Danger	Red LED + Buzzer



---

## 🧠 Technical Explanation

MQ-3 sensor uses SnO₂ semiconductor layer

Alcohol vapors reduce sensor resistance

Voltage divider converts resistance to voltage

Arduino ADC converts voltage to digital value (0–1023)

Program compares values to thresholds

Alerts activated accordingly



---

## ✅ Features

✔ Sensor calibration
✔ Averaged readings for stability
✔ 3-level categorization
✔ Buzzer alert
✔ Manual alert disable switch
✔ Serial debugging
✔ Low-cost design
✔ Expandable architecture


---

## ⚠️ Limitations

Requires warm-up time

Sensitive to humidity & temperature

Cannot measure exact Blood Alcohol Concentration (BAC)

May respond to other volatile vapors



---

## 🚀 Future Enhancements

Add LCD display

Add GSM alert system

Add IoT cloud monitoring

Add vehicle ignition interlock relay

Convert to battery-powered system



---

## 📚 Applications

Vehicle safety systems

Industrial alcohol monitoring

Laboratory experiments

Educational embedded systems projects

Smart safety prototypes



---


## 🏁 Conclusion

This project demonstrates a practical, embedded alcohol detection system using MQ-3 and Arduino Nano. Through proper calibration and threshold-based logic, it provides a reliable and cost-effective safety alert system.



Tell me which one you want 😄
