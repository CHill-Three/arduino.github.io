<!-- Quick Notes -->
<!-- 1). To break lines: do two spaces after the line or do <br/> -->

<!-- Title -->
# CHill-Three's github.io Arduino Page
Hey there! Welcome to my Arduino repository created on July 29, 2020. <br/>

<!-- Home Button (Home) -->
<style>
.tablelines table, .tablelines td, .tablelines th {
        border: 2px solid black;
        }
</style>
| :-: |
| [Back to Homepage](https://chill-three.github.io/) |
{: .tablelines}

<!-- Table of Contents (TITLES) -->

# Table of contents
1. [Arduino Starter Projects](#Arduino Starter Projects)<br/>
  I. [Project 1: Blink](#Project 1: Blink)<br/>
  II. [Project 2: LED](#Project 2: LED)<br/>
  III. [Project 3: RGB LED](#Project 3: RGB LED)<br/>
  IV. [Project 4: Digital Inputs](#Project 4: Digital Inputs)<br/>
  V. [Project 5: Active Buzzer](#Project 5: Active Buzzer)<br/>
  VI. [Project 6: Passive Buzzer](#Project 6: Passive Buzzer)<br/>
  VII. [Project 7: Tilt Ball Switch](#Project 7: Tilt Ball Switch)<br/>
  VIII. [Project 8: Servo](#Project 8: Servo)<br/>
  IX. [Project 9: Ultrasonic Sensor Module](#Project 9: Ultrasonic Sensor Module)<br/>
<!-- Table of Contents (BODY) -->

<!-- Arduino -->
## Arduino Starter Projects <a name="Arduino Starter Projects"></a>
Arduino is an educational C-programming (C++) platform resource designed for users to create and/or modify electronic system designs. This is a list of my completed projects from the starter projects derived from Elegoo’s Arduino manuel. I hope you enjoy!

<!-- Project 1: Blink (SUB-PARA) -->
### Project 1: Blink <a name="Project 1: Blink"></a>
![MyBlink.gif](/Arduino/Project 1: Blink/MyBlink.gif)<br/>

<!-- Description & Learning Overview -->
> ### Description:
>
>> Project 1: Blink demonstrated with the MEGA2560 R3 board, is the first project from Elegoo’s Arduino manuel. This particular project utilizes the single controllable LED that is present on the board and is often referred to and labeled as the 'L' LED. Within the code, LED 'L' is pin number '13' on the MEGA2560 R3 board and "on most Arduinos" according to Elegoo’s Arduino manuel. With this information in mind, the goal of this project is to get the LED to blink once, turn off and repeat the said cycle.
>
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>
> ### Learning Overview:
>
>> For me, the most difficult part of the project was setting up the MEGA2560 R3 board. I had diffculties connecting to the board which, I later found out that it was the result of old and/or faulty drivers. Once that out of the way, programming the project was simple and I was able to complete the task of getting the LED to blink once, turn off and repeat the cycle. Overall, I enjoyed this project and I concur with the author(s) of this manuel that this should be the first project of series. If you decide to take on this project, I hope you enjoy it!
>
> ### Resource(s) for - Project 1: Blink:
>
>> [Code (MyBlink.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%201:%20Blink/MyBlink.ino)<br/>

<!-- Project 2: LED (SUB-PARA) -->
### Project 2: LED <a name="Project 2: LED"></a>
![LED.gif](/Arduino/Project 2: LED/LED.gif)<br/>

<!-- Description & Learning Overview -->
> ### Description:
>
>> Project 2: LED demonstrated with the MEGA2560 R3 board, is the second project from Elegoo’s Arduino manuel. This particular project utilizes a single controllable 5mm colored LED on a connected breadboard. Within this project, the concept of 'resistors' is extremely important when it comes to LED brightness. Elegoo’s Arduino manuel has multiple visuals ranging from resistor band codes, connection and wiring diagrams, to an overall photo of the finished product. With this information in mind, the goal of this project is to get the 5mm LED to light up and try different resistors for different LED brightness results.
>
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x 830 Tie Points Breadboard
>> - (1) x 5mm colored LED (For my attempt, I chose a Red LED)
>> - (1) x 1k ohm resistor (Try different resistors to see it's effect on the LED)
>> - (2) x M-M wires (Male to Male jumper wires)
>
> ### Learning Overview:
>
>> In my opinion, the most important lesson to take away from this particular project is: the concept of 'resistors.' As Elegoo’s Arduino manuel states, "resistors resist the flow of electricity. The higher the value of the resistor, the more it resists and the less electrical current will flow through it." Learning and understanding this concept is crucial when utilizing circuits: it is a fundamental building block when learning about circuits. For instance, if too much current flows through an LED, it is destroyed: so we must utilize a resistor to limit the current. Thankfully, we do not need to worry about that outcome in this environment as the max voltage from this MEGA2560 R3 board via regulator is 5V. Overall, I enjoyed this project and though it is perhaps simpler than Project 1: Blink, the concept of resistors is a bit complex to understand at first. If you decide to take on this project, I hope you enjoy it!
>
> ### Resource(s) for - Project 2: LED:
>
>>[No code is required for Project 2: LED (LED.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%202:%20LED/LED.ino)<br/>

<!-- Project 3: RGB LED (SUB-PARA) -->
### Project 3: RGB LED <a name="Project 3: RGB LED"></a>
![RGBLed.gif](/Arduino/Project 3: RGB LED/RGBLed.gif)<br/>

<!-- Description & Learning Overview -->
> ### Description:
>
>> Project 3: RGB LED demonstrated with the MEGA2560 R3 board, is the third project from Elegoo’s Arduino manuel. This particular project utilizes a single controllable 5mm RGB LED on a connected breadboard. Instead of the two leads as seen with the 5mm colored LED in the last project, this 5mm RGB LED has a total of four leads. Within the RGB LED, there are actually three colored LEDs: red, green and blue. Each of the colored LEDs has a specific lead associated with it, hence the requirement of four total leads. In addition, instead of utilizing different resistors for different brightness levels, we utilize the 'analogWrite' function in Arduino. This particular function allows us to designate a specific variable amount of power to the three different colored LEDs. In addition, this goes into a theory called Pulse Width Modulation (PWM), which is explored in depth within the manuel. Lastly, Elegoo’s Arduino manuel has multiple visuals ranging from an RGB color chart, RGB LED schematics and wiring diagrams, to an overall photo of the finished product. With this information in mind, the goal of this project is to get the 5mm RGB LED to light up and try different RGB LED values to get different LED color results.
>
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x 830 Tie Points Breadboard
>> - (4) x M-M wires (Male to Male jumper wires)
>> - (1) x RGB LED
>> - (3) x 220 ohm resistors
>
> ### Learning Overview:
>
>> In my opinion, Project 3: RGB LED was perhaps the most fun project out of the projects I did complete within Elegoo’s Arduino manuel. It was interesting changing the values of the RGB LED to create a specific color and seeing it transition to different colors. Difficulty wise, coming directly off of Project 2: LED, this project was pretty simple: the only real change was utilizing the analogWrite function to control the voltage instead of utilizing specific resistors from the previous project. Overall, I'm glad that the author(s) of this manuel put this project very early on as, I'd say that this is a great project to get younger individuals interested with circuits. Out of all the projects within Elegoo’s Arduino manuel, if you had to do one, I would suggest doing this. If you decide to take on this project, I hope you enjoy it!
>
> ### Resource(s) for - Project 3: RGB LED:
>
>>[Code (RGBLed.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%203:%20RGB%20LED/RGBLed.ino)<br/>

<!-- Project 4: Digital Inputs (SUB-PARA) -->
### Project 4: Digital Inputs <a name="Project 4: Digital Inputs"></a>
![DigitalInput.gif](/Arduino/Project 4: Digital Inputs/DigitalInput.gif)<br/>

<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x 830 Tie-points Breadboard
>> - (1) x 5mm colored LED (For my attempt, I chose a Green LED)
>> - (1) x 220 ohm resistor
>> - (2) x push switches
>> - (7) x M-M wires (Male to Male jumper wires)

Resources for - Project 4: Digital Inputs<br/>
[Code (DigitalInput.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%204:%20Digital%20Inputs/DigitalInputs.ino)<br/>

<!-- Project 5: Active Buzzer (SUB-PARA) -->
### Project 5: Active Buzzer <a name="Project 5: Active Buzzer"></a>
![ActiveBuzzer.gif](/Arduino/Project 5: Active Buzzer/ActiveBuzzer.gif)<br/>

<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x Active buzzer
>> - (2) x F-M wires (Female to Male DuPont wires)

Resources for - Project 5: Active Buzzer<br/>
[Code (ActiveBuzzer.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%205:%20Active%20Buzzer/ActiveBuzzer.ino)<br/>

<!-- Project 6: Passive Buzzer (SUB-PARA) -->
### Project 6: Passive Buzzer <a name="Project 6: Passive Buzzer"></a>
![PassiveBuzzer.gif](/Arduino/Project 6: Passive Buzzer/PassiveBuzzer.gif)<br/>

<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x Passive buzzer
>> - (2) x F-M wires (Female to Male DuPont wires)

Resources for - Project 6: Passive Buzzer<br/>
[Code (PassiveBuzzer.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%206:%20Passive%20Buzzer/PassiveBuzzer.ino)<br/>

<!-- Project 7: Tilt Ball Switch (SUB-PARA) -->
### Project 7: Tilt Ball Switch <a name="Project 7: Tilt Ball Switch"></a>
![TiltBall.gif](/Arduino/Project 7: Tilt Ball Switch/TiltBall.gif)<br/>

<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x 830 Tie Points Breadboard
>> - (1) x Tilt Ball switch
>> - (1) x 5mm colored LED (For my attempt, I chose a Blue LED)
>> - (1) x 1k ohm resistor
>> - (2) x M-M wires (Male to Male jumper wires)
>> - (2) x F-M wires (Female to Male DuPont wires)

Resources for - Project 7: Tilt Ball Switch<br/>
[Code (TiltBallSwitch.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%207:%20Tilt%20Ball%20Switch/TiltBallSwitch.ino)<br/>

<!-- Project 8: Servo (SUB-PARA) -->
### Project 8: Servo <a name="Project 8: Servo"></a>
![Servo.gif](/Arduino/Project 8: Servo/Servo.gif)<br/>

<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x Servo (SG90)
>> - (3) x M-M wires (Male to Male jumper wires)

Resources for - Project 8: Servo<br/>
[Code (Servo.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%208:%20Servo/Servo.ino)<br/>

<!-- Project 9: Ultrasonic Sensor Module (SUB-PARA) -->
### Project 9: Ultrasonic Sensor Module <a name="Project 9: Ultrasonic Sensor Module"></a>
![UltraSonic.gif](/Arduino/Project 9: Ultrasonic Sensor Module/UltraSonic.gif)<br/>
![UltraSonicData.gif](/Arduino/Project 9: Ultrasonic Sensor Module/UltraSonicData.gif)<br/>
![UltraSonicDataPt2.gif](/Arduino/Project 9: Ultrasonic Sensor Module/UltraSonicDataPt2.gif)<br/>
<!-- Component Required List -->
> ### Components Required:
>
>> - (1) x Elegoo Mega2560 R3
>> - (1) x Ultrasonic sensor module
>> - (4) x F-M wires (Female to Male DuPont wires)

Resources for - Project 9: Ultrasonic Sensor Module<br/>
[Code (UltraSonic.ino)](https://github.com/CHill-Three/arduino.github.io/blob/master/Arduino/Project%209:%20Ultrasonic%20Sensor%20Module/UltraSonic.ino)<br/>
