/* TMP36 library
 
 Copyright 2017 Isaac100

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 This library converts the analog values from a TMP36 temperature
 sensor directly into Celcius and Fahrenheit so you don't have to. 
 */

#include "Arduino.h"
#include "TMP36.h"

TMP36::TMP36(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;  
}

float TMP36::getVoltage()
{
  _value = analogRead(_pin);
  _voltage = (_value/1024.0) * 5.0;
  return _voltage;
}

float TMP36::getTempC()
{
  _value = analogRead(_pin);
  _voltage = (_value/1024.0) * 5.0;
  _tempC = (_voltage - .5) * 100;  
  return _tempC;
}

float TMP36::getTempF()
{
  _value = analogRead(_pin);
  _voltage = (_value/1024.0) * 5.0;
  _tempC = (_voltage - .5) * 100;  
  _tempF = (_tempC * 1.8) + 32; 
  return _tempF;
}


