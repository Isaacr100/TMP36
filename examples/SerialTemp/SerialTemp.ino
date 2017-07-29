/* SerialTemp example
 
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

 This exmaple writes the current temperarure in celcius
 and fahrenheit to the serial monitor.
 */

#include <TMP36.h>

//Create an instance of the TMP36 class and 
//define the pin the sensor is connected to
TMP36 myTMP36(A0, 5.0); 

void setup() {
  Serial.begin(9600);
}

void loop() {
  //create a variable and store the current temperature in
  //celius in it using the getTempC function
  float celcius = myTMP36.getTempC(); 
  
  //create a variable and store the current temperature in
  //fahrenheit in it using the getTempF function
  float fahrenheit = myTMP36.getTempF(); 

  //Print the data to the Serial monitor
  Serial.print("Celcius: ");
  Serial.print(celcius);
  Serial.print(" Fahrenheit: ");
  Serial.println(fahrenheit);
  delay(500);
}
