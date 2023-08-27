#include <Arduino.h>
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
#define BTN1 A1
#define BTN2 A2
#define BTN3 A3
// put function declarations here:
// int myFunction(int, int);

void setup() {
  pinMode(A1,INPUT);
  pinMode(3,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  // int result = myFunction(2, 3);
  // Serial.begin(9600);
  // Serial.println(result);
}

void loop() {
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(100);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(100);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(100);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(100);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);
delay(500);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);

  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }