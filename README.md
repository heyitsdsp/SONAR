# SONAR
A SONAR system using Arduino 

# INTRODUCTION AND AIM
This project aims to create a SONAR mapping device which uses an ultrasonic distance sensor to map the surroundings of the device in a semicircular region in-front of the device. It can also be used as an obstacle detection device, which have many more applications such as in self-driving cars.

# COMPONENTS USED
1) Arduino Uno
2) HC-SR04 (Ultrasonic Distance Sensor Module)
3) SG-90 Micro Servo Motor
4) Jump Wires

# CONNECTIONS
1) Pin 5 on the Arduino Uno is connected to Trig (TRIGGER) Pin of the HC-SR04
2) Pin 6 on the Arduino Uno is connected to Echo (ECHO) Pin of the HC-SR04
3) Pin 9 on the Arduino Uno is connected to Data Pin of the SG-90 Servo

# THEORY
The HC-SR04 is mounted on top of the SG-90 as shown in the image.
The servo rotates and with each rotation, the HC-SR04 calcuates the distance from the sensor to the wall/obstacle. It then calculates the angle between 2 distance measurements and provides the data via the serial monitor.

Some basic math was used to get the co-ordinates of points around the device. All co-ordinates were plotted using PROCESSING in real time. The map refreshes itself after it completes one full semicircle, to and forth.

# RESULT
A 2-Dimensional Map of the surroundings of the device is obtained.