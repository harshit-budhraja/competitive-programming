/*
 * My first Arduino program for blinking the LED on pin 13
 * Author:- Harshit Budhraja
 */

int ledpin=13;  //LED connected to pin 13 on the arduino board

void setup() {
    pinMode(ledpin,OUTPUT); //Sets the digital pin 13 to OUTPUT mode
}

//This loop runs for 5 times.
void loop() {
  digitalWrite(ledpin,HIGH);  //Switch 'ON' the LED at pin 13
  delay(1000);  //Delay for 1sec
  digitalWrite(ledpin,LOW); //Switch 'OFF' the LED at pin 13
  delay(1000);  //Again Delay for 1sec
}

