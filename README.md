# Line Follower Robot  

A **Line Follower Robot** is an autonomous robotic vehicle that follows a predefined path using **infrared (IR) sensors** and **Arduino Uno**. It is widely used in industrial automation, robotics competitions, and autonomous navigation applications.  

## Overview  
As the name suggests, the **Line Follower Robot** follows a **visual line** embedded on a surface. It typically uses a **black line on a white surface** or a **white line on a black surface**, depending on the sensor configuration.  

## Working Principle  
The robot operates based on the **light reflection properties** of different surfaces:  
- **White Surface** – Reflects IR light, which is detected by the IR receiver.  
- **Black Surface** – Absorbs IR light, preventing detection by the IR receiver.  

### Sensor Mechanism  
The robot uses **IR transmitters and receivers (photodiodes)** to detect the path:  
1. **IR rays fall on the white surface** → Reflected back to the IR receiver → Arduino detects **HIGH (1)**.  
2. **IR rays fall on the black line** → Absorbed by the surface → No reflection → Arduino detects **LOW (0)**.  
3. Based on these signals, the **Arduino Uno** controls the motors to adjust the robot’s movement and stay on track.  

## Components Used  
- **Arduino Uno** – Processes sensor input and controls the motors.  
- **IR Sensors** – Detect the black/white surface for path following.  
- **Motor Driver (L293D / L298N)** – Controls motor speed and direction.  
- **BO Motors & Wheels** – Drive the robot forward.  
- **Lithium-Ion Battery** – Powers the robot.  
- **Jumper Wires & Chassis** – For assembly and connectivity.  

## Functionality  
- **Follows a Line:** Uses IR sensors to detect and track the predefined path.  
- **Real-Time Adjustments:** Adjusts motor speed to stay aligned with the line.  
- **Simple & Efficient:** Can be implemented for industrial automation, smart transport, and robotics competitions.    

## Software & Simulation  
- **Arduino IDE** – Used to program the **Arduino Uno**.  
- **Proteus** – Used for circuit simulation before implementation.  

## How to Build  
1. **Assemble the Chassis** – Mount the motors, battery, and IR sensors.  
2. **Connect Components** – Wire up the **Arduino, IR sensors, and motor driver**.  
3. **Upload Code** – Write and upload the Arduino sketch using the **Arduino IDE**.  
4. **Test & Calibrate** – Adjust sensor sensitivity and motor speed for smooth tracking.  

## Code & Repository  
Find the complete **Arduino source code** and **Proteus simulation files** in this repository.  

 
## License  
This project is licensed under the **MIT License**. 
