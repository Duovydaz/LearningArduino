#include <Arduino.h>
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
// put function declarations here:
// int myFunction(int, int);

void setup() { 
  pinMode(3,OUTPUT);
  pinMode(A1,INPUT);
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
  delay(5000);
  digitalWrite(3,LOW);
  digitalWrite(LED1,HIGH);
  delay(400);
  digitalWrite(LED3,HIGH);
  delay(300);
  digitalWrite(LED2,HIGH);
  delay(200);
  digitalWrite(LED4,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(400);
  digitalWrite(LED3,LOW);
  delay(300);
  digitalWrite(LED2,LOW);
  delay(200);
  digitalWrite(LED4,LOW);
  delay(100);
  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }