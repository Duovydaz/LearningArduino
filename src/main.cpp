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
  delay(150);
  digitalWrite(3,LOW);
  delay(150);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  delay(145);
  digitalWrite(3,LOW);
  delay(165);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(3,LOW);
  delay(500);
  digitalWrite(3,HIGH);

  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED3,LOW);
  delay(150);
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED2,LOW);
  delay(100);
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(100);
  digitalWrite(LED1,HIGH);
  delay(145);
  digitalWrite(LED1,LOW);
  delay(165);
  digitalWrite(LED4,HIGH);
  delay(250);
  digitalWrite(LED4,LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }