# TMP36
The TMP36 library is a very simple Arduino library that converts the analog values from a TMP36 temperature sensor directly into Celcius and Fahrenheit so you don't have to.
## Using the library
Using the library is very easy, and there are only a few functions to learn.
 * `TMP36 name(pin, voltage)` - Creates an instance of the class where **name** is a name you choose, **pin** is the pin the TMP36 is connected to, and **voltage** is the voltage applied to the sensor(5 for 5v Arduino, 3.3 for 3.3v Arduino).  Check out [this tutorial](https://learn.adafruit.com/tmp36-temperature-sensor?view=all) for more information.
 * `name.getVoltage()` - Returns the voltage
 * `name.getTempF()` - Returns the temperature in Fahrenheit
 * `name.getTempC()` - Returns the temperature in Celcius<br />
 
The SerialTemp example included writes the temperature in both scales to the serial monitor.
## New in v1.1.0
New example sketch ConsoleSerialTemp is exactly the same as SerialTemp, but it uses the Console.
## New in v1.2.0
I cleaned up the cpp code to make it a little more efficient, and added the option to specify the voltage applied to the TMP36. 
## License
 Copyright 2017 Isaac100

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
