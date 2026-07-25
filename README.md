# Obstacle Avoidance Robot Using Arduino

## Project Overview

This project demonstrates an obstacle avoidance robot using an Arduino Uno, two L293D motor driver ICs, four DC motors, a Servo Motor, and an HC-SR04 Ultrasonic Sensor. The entire system was designed and simulated using Tinkercad.

The robot continuously measures the distance to objects in front of it using the ultrasonic sensor. When an obstacle is detected within 10 cm, the robot stops, rotates the servo motor to scan the surroundings, changes its direction by moving backward, and then continues moving.

This project extends the previous DC motor control project by integrating sensors and autonomous obstacle detection.

---

# Previous Project

This project is an extension of the DC motor control project.

Previous Project Repository

<https://github.com/Rayan-D57/Arduino-DC-Motor-Control-Using-L293D>

---

# Components Used

- Arduino Uno
- 2 × L293D Motor Driver IC
- 4 × DC Motors
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Breadboard
- 9V Battery
- Jumper Wires

---

# Software Used

- Tinkercad

---

# HC-SR04 Ultrasonic Sensor

The HC-SR04 is an ultrasonic distance sensor used to measure the distance between the sensor and nearby objects. It works by transmitting ultrasonic waves and calculating the time required for the echo signal to return after hitting an object.

The sensor includes four pins:

- VCC – Supplies 5V power.
- TRIG – Sends the ultrasonic pulse.
- ECHO – Receives the reflected pulse.
- GND – Ground connection.

## HC-SR04 Pinout

Place the HC-SR04 pinout image here.
Insert the HC-SR04 pinout image here.

---

# Connections

## HC-SR04 Connections

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | A0 |
| ECHO | A1 |

---

## Servo Motor Connections

| Servo Wire | Arduino Pin |
|------------|-------------|
| Red (VCC) | 5V |
| Brown / Black (GND) | GND |
| Orange (Signal) | A2 |

---

# Project Workflow

1. Create a new circuit in Tinkercad.
2. Add all required components.
3. Connect the two L293D motor drivers to the Arduino.
4. Connect the four DC motors.
5. Connect the HC-SR04 ultrasonic sensor.
6. Connect the servo motor.
7. Upload the Arduino code.
8. Start the simulation.

During operation:

- The robot moves forward while measuring the distance.
- If the measured distance is greater than 10 cm, the robot continues moving.
- If an object is detected within 10 cm:
  - The motors stop.
  - The servo motor scans the surroundings.
  - The robot changes its direction by moving backward.
  - The robot resumes obstacle detection.

---

# Circuit Image

<img width="1536" height="687" alt="Copy of DC motor" src="https://github.com/user-attachments/assets/efa44ba5-9c2a-4e1c-bf5f-67893db3c064" />

---

# Simulation

Place a screenshot of the running simulation here.
Insert the simulation screenshot here.

---

# Simulation Video



---

# Results

The obstacle avoidance system was successfully implemented and simulated using Tinkercad.

The ultrasonic sensor accurately measured the distance to nearby objects. Whenever an obstacle was detected within 10 cm, the robot stopped, rotated the servo motor to scan the surrounding area, changed its direction, and continued moving. The simulation demonstrated successful integration of the Arduino Uno, L293D motor drivers, DC motors, HC-SR04 ultrasonic sensor, and servo motor.

---

# Future Improvements

Several enhancements can be added to improve the robot's performance in future versions:

- Implement autonomous path selection instead of only moving backward.
- Add infrared (IR) sensors for improved obstacle detection.
- Control the motor speed using PWM based on obstacle distance.
- Add Bluetooth or Wi-Fi connectivity for remote monitoring and control.
- Display the measured distance on an LCD or OLED display.
- Replace the 9V battery with a rechargeable battery pack.
- Improve the scanning algorithm by analyzing multiple servo angles before selecting a new direction.
- Integrate line-tracking sensors for autonomous navigation.









