# Autonomous-KK2-Flight-Controller-Arm-and-Disarm-Control

This project demonstrates how to autonomously control the KK2 Flight Controller using microcontrollers like Arduino, STM32, ESP8266, or ESP32. Traditionally, the KK2 is operated via user-managed remote controls, but the goal of this project is to automate the arming, disarming, and movement commands of the KK2 without any human intervention.

Developed by MakinaFleo, this project enables the following functionalities:

Arm/Disarm the KK2 Flight Controller automatically.
Send specific movement commands such as forward, backward, left, right, up, and down, without needing a remote control.
While this example uses an Arduino microcontroller, the system can be adapted to work with any microcontroller capable of generating a PWM signal.

- Video Demonstration
  https://youtu.be/uPGEw0mMkYU?si=ReMOdekF3uYLXi7S

- Features
Autonomous arming and disarming of the KK2 flight controller.
Automated movement commands: forward, backward, left, right, up, and down.
Compatible with a wide range of microcontrollers (Arduino, STM32, ESP8266, ESP32, etc.).
PWM signal-based control, ensuring flexibility and scalability for other microcontroller systems.

- Getting Started
Hardware Requirements
KK2 Flight Controller
Arduino (or any compatible microcontroller: STM32, ESP8266, ESP32, etc.)
PWM-enabled microcontroller pins
Power supply and connections for the KK2 and microcontroller

- Software Requirements
Arduino IDE (for Arduino)
Required libraries for your chosen microcontroller
PWM control libraries (if not already included)

- Setup and Connections
Connect the KK2 Flight Controller to the microcontroller via PWM pins.
Use the Arduino (or other microcontroller) to send signals for arming, disarming, and controlling the direction of the flight.
Ensure proper power supply for both the microcontroller and KK2 flight controller.

- Microcontroller Configuration
In the provided code, the Arduino is configured to send specific PWM signals to control the KK2. Ensure that:

The PWM signal is compatible with the KK2 flight controller.
Each signal corresponds to the desired command (e.g., arming, disarming, movement direction).

- Usage
To run the system:

Upload the code to your microcontroller.
Ensure all connections are secure between the KK2 controller and the microcontroller.
Power on the system. The KK2 will automatically arm and execute commands without needing a remote control.

- Customization
This project can be expanded or customized by modifying:

The PWM signals to adjust control commands.
The microcontroller for more advanced features or additional sensors.
The code for custom flight modes or behaviors.

- Contributing
Feel free to fork this repository and make improvements or suggestions. Contributions are welcome!
