# Robot_Hand

<p align="center">
  <img src="/Image/Robot_Hand_Main_IMG.png" width=50% height=50%>
</p>
## Overview

This repository shows my journey of designing and building a 3D-printed robot hand. This project was undertaken to provide me with valuable knowledge and experience with 3D printing Arduino / microcontrollers and the basics of robotics. This provided a strong foundation of knowledge for my next robotics project.

## Learning Objectives
### CAD Design using Fusion 360
-	Using Fusion 360 CAD software to design and model the robot hand.
-	Understanding the various tools and features within Fusion 360.
### 3D printed parts
-	Understand how to design for optimal 3D printing results.
-	Exploring different 3D printing techniques.
### Understanding the Prototyping Process
-	Evaluating prototypes and identifying flaws.
-	Modifying the design based on prototyping results.
### Hands-on Experience with Servo Motors and Microcontrollers
-	Gaining practical experience in integrating servo motors with the robot hand design.
-	Understanding how Control Servo Motors and their limitations.
### Learning the basics of C++
-	Gain an understanding of the C++ programming language used in microcontroller development.
Learning the basics of Swift 
-	Understand how to make a basic IOS and watch OS app.


## Skills developed
### Fusion 360 / 3D Printing
-	Strong understanding of how to module in Fusion 360
-	The use of Fusion 360 user parameters.
-	Strong knowledge of parametric CAD design and its advantages.
-	The use of print-in-place joints provides a simple and robust joint.
-	Strong knowledge of the cura slicer software to generate G code from the STL file.
-	How tweaking parameters can affect print time and part strength.
-	The use of test prints to understand part tolerance for print-in-place joints.
-	The ability to recognise when to restart a design instead of trying to improve an existing design.

### Hardware components
-	Understanding the different types of servo motors and the ability to choose the appropriate type. 
-	Understanding the different types of microcontrollers and their advantages and disadvantages.
-	How to wire different components together using a breadboard. 
-	Hands-on experience with soldering components to a perfboard.

### Software
-	Developed a strong understanding of Arduino libraries (WiFiClient, Servo)
-	Strong knowledge of HTTP requests and web servers.
-	Developed a basic understanding of creating a swift application that uses HTTP requests to interact with other devices on the network.

## Assembly instructions
-	3D print the provided STL modules in PLA with a 0.2-layer height.
-	Glue the base of each finger to the palm.
-	Cut the ends off four zip types, glue it to the top of each finger, and slot it into the corresponding clip on the back of the palm.
-	Attach the servo horn to each servo.
-	Mout each servo to the back of the palm.
-	Run a string from the hole in the top of each finger through the string clips on the fingers and then glue it to the servo horns.
-	Wire the servos and two push buttons to the ESP8266 using the wiring diagram below. 
-	Uploaded the provided code to the ESP8266. (Change WiFi SSID and Password)
-	Power the ESP8266 via USB and navigate to 192.168.0.26 from a web browser to control the hand. (change the static IP address if using different IP range)




## Demo GIF
<p align="center">
  <img src="/Image/RobotHand.gif" width=50% height=60%>
</p>


## Image gallery
<p align="center">
  <img src="/Image/Robot_Hand_Main_IMG.png" width=50% height=50%>
  <img src="/Image/Robot_Hand_Back_IMG.png" width=50% height=50%>
  <img src="/Image/Robot_Hand_Real_Frount.png" width=50% height=50%>
  <img src="/Image/Robot_Hand_Real_Back.png" width=50% height=40%>
  <img src="/Image/Robot_Hand_Real_ESP.png" width=50% height=30%>
</p>



