/* TMP36 library
 
 Copyright 2017 Isaac100

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an "AS IS" BASIS, 
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 This library converts the analog values from a TMP36 temperature
 sensor directly into Celcius and Fahrenheit so you don't have to. 
 */

#ifndef TMP36_h
#define TMP36_h

#include "Arduino.h"

class TMP36
{
  public:
    TMP36(uint8_t pin);
    float getVoltage();
    float getTempC();
    float getTempF();
  private:
    uint8_t _pin;
    int _value;
    float _voltage;
    float _tempC;
    float _tempF;    
};

#endif

