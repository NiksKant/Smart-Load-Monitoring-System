🌱 Smart Environmental Monitoring System (Arduino + Wokwi)
📌 Project Overview

This mini project demonstrates a Smart Environmental Monitoring System simulated using Wokwi and built around an Arduino UNO.
The system measures key environmental parameters such as:

🌡 Temperature

💧 Humidity

🌫 Air Quality

💡 Light Intensity

All sensor readings are displayed in real time on a 16×2 LCD, making the system suitable for smart environment, IoT, and sustainability-based applications.

🎯 Objective

The main objective of this project is to:

Monitor environmental conditions using low-cost sensors

Interface multiple analog and digital inputs with Arduino UNO

Display real-time sensor data on an LCD

Simulate and test the complete system using Wokwi

🧰 Components Used
Component	Quantity
Arduino UNO	1
DHT22 Temperature & Humidity Sensor	1
Potentiometer (Air Quality Simulation)	1
Potentiometer (Light Intensity Simulation)	1
16×2 LCD Display	1
Breadboard & Jumper Wires	As required

⚠️ Potentiometers are used to simulate Air Quality and Light sensors in the Wokwi environment.

⚙️ Working Principle

DHT22 Sensor

Measures temperature and humidity digitally

Sends data to Arduino via a single data pin

Potentiometer 1 (Air Quality)

Simulates air quality levels (analog input)

Higher values indicate poorer air quality

Potentiometer 2 (Light Intensity)

Simulates ambient light levels (analog input)

Arduino UNO

Reads all sensor values

Processes and formats the data

16×2 LCD

Displays sensor readings in real time

🖥️ Output Display (LCD)

Example LCD output:

Temp: 28°C  Hum: 62%
AQI: 145   Light: 320

🧪 Simulation Platform

Wokwi – Online Arduino & IoT Simulator

Allows testing without physical hardware

Ideal for learning, hackathons, and quick prototyping

🚀 Applications

Smart Home Systems

Environmental Monitoring

Air Quality Awareness Devices

IoT-Based Sensing Projects

Educational & Hackathon Projects

📂 Repository Structure
📁 Smart-Environmental-Monitoring
 ├── 📄 README.md
 ├── 📄 diagram.json        # Wokwi circuit diagram
 ├── 📄 sketch.ino          # Arduino code

🛠️ How to Run the Project

Open https://wokwi.com/

Create a new Arduino UNO project

Copy the contents of:

sketch.ino into the Arduino editor

diagram.json into the diagram editor

Click Run Simulation

Rotate the potentiometers to observe changes in AQI and Light values

🧠 Learning Outcomes

Interfacing DHT22 with Arduino

Reading analog sensor data

LCD interfacing using Arduino

Real-time data monitoring

Simulation-based prototyping using Wokwi

🤝 Contributors

Nikhil Kant

Nisha Jan
