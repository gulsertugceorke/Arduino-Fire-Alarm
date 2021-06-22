# Arduino-Fire-Alarm
A fire alarm was made in this project. 
In this project, an LED is constantly lit from the moment the program starts working.
When the lighter is brought close to the ard-mdl-804 sensor, the sensor detects the temperature and the buzzer starts to beep.
With the buzzer, the other led starts to flash at the same time.
In the project, the buzzer is connected to pin 11. yled connected to pin 12 and led connedted to pin 13. Fire connected to pin 7.
And there is a variable named deger. Pinmode is used to define any of the digital input / output pins as an input or output.
These definitions are made in the setup section.
If the value read from the fire is high, the led starts to turn on and the buzzer starts to squeal.
After a 50 ms wait, the buzzer stops and the led turns off.
The other led continues to light throughout the program.
