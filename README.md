# Smart Parking System using Arduino

## Overview

The Smart Parking System is an IoT-based project developed using Arduino Uno to automate vehicle parking management. The system detects vehicle presence and parking slot availability using ultrasonic and IR sensors. A servo motor controls the entry gate automatically, while a buzzer and LED indicate parking status.

## Features

* Automatic gate opening and closing
* Real-time parking slot detection
* Parking full alert using buzzer and LED
* Vehicle detection using ultrasonic sensor
* Low-cost and efficient parking solution

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* IR Sensors
* Servo Motor
* Buzzer
* LED
* Jumper Wires
* Breadboard

## Working Principle

1. Ultrasonic sensor detects approaching vehicle.
2. IR sensors monitor parking slot availability.
3. If parking space is available:

   * Servo motor opens the gate.
4. If parking is full:

   * Buzzer and LED are activated.
5. System continuously updates parking status.

## Circuit Connections

| Component       | Arduino Pin |
| --------------- | ----------- |
| Ultrasonic Trig | 2           |
| Ultrasonic Echo | 3           |
| IR Sensor 1     | 4           |
| IR Sensor 2     | 5           |
| IR Sensor 3     | 6           |
| Servo Motor     | 7           |
| Buzzer          | 8           |
| LED             | 9           |

## Software Requirements

* Arduino IDE
* Servo Library

## Applications

* Smart city parking
* Shopping malls
* Office parking systems
* Apartment parking areas
* Hospitals and colleges

## Demo Link 

https://www.instagram.com/p/DYgmTITGk0C/?igsh=MTFzYm15cW5va280Yw==


## Future Improvements

* Mobile app integration
* Cloud-based monitoring
* LCD display for slot count
* RFID-based vehicle authentication

## Author

Krishna Dubey
MCV Integrative Student, AKTU University

