# Arduino-Python Interface for Soil Moisture Monitoring and Control

This project establishes communication between an Arduino board and a Python script to monitor soil moisture levels using a soil moisture sensor. Additionally, it allows for controlling an LED connected to the Arduino from the Python script. The project is intended for applications such as automated plant watering systems.

Features
Real-time Soil Moisture Monitoring: The Arduino reads soil moisture levels using a soil moisture sensor and sends the data to the Python script.

LED Control: The Python script allows users to remotely control an LED connected to the Arduino, providing the ability to turn the LED on or off.

Arduino Setup
Connect a soil moisture sensor to analog pin A0 on the Arduino.
Connect an LED to a digital pin on the Arduino (modify the pin number in the Arduino code).
Upload the provided Arduino sketch (soil_moisture.ino) to your Arduino board.

Python Setup
Install the pyserial library using pip install pyserial.
Modify the COM5 in ser = serial.Serial('COM5', 9600, timeout=1) to match the COM port of your Arduino.
Run the provided Python script (arduino_interface.py) to interact with the Arduino.

Usage
Run the Python script (arduino_interface.py).
Choose an option from the menu:
1: Read Soil Moisture
2: Turn On LED
3: Turn Off LED
4: Get LED Status
5: Exit
The Arduino performs the corresponding action and sends the response back to the Python script.
Monitor soil moisture levels and control the LED as needed.

Authors
Chirag Vats

License
This project is licensed under the MIT License, granting users the freedom to modify and distribute the software as per the terms of the license agreement.
