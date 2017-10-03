/* ConsoleSerialTemp example
 
 Copyright 2017 Isaac100

 This exmaple writes the current temperarure 
 in celsius and fahrenheit to the console.
 
*/

#include <TMP36.h>
#include <Bridge.h>
#include <Console.h>
 
//Create an instance of the TMP36 class and 
//define the pin the sensor is connected to
//If using 3.3v Arduino, change 5 to 3.3
TMP36 myTMP36(A0, 5.0); 

void setup() {
  Bridge.begin();
  Console.begin();
}

void loop() {
  //create a variable and store the current temperature in
  //celius in it using the getTempC function
  float celsius = myTMP36.getTempC(); 
  
  //create a variable and store the current temperature in
  //fahrenheit in it using the getTempF function
  float fahrenheit = myTMP36.getTempF(); 

  //Print the data to the Console monitor
  Console.print("Celsius: ");
  Console.print(celsius);
  Console.print(" Fahrenheit: ");
  Console.println(fahrenheit);
  delay(500);
}
