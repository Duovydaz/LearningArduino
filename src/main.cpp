#include <Arduino.h>
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
// put function declarations here:
// int myFunction(int, int);

void setup() { 
  pinMode(A1,INPUT);
  pinMode(LED2,OUTPUT);
  digitalWrite(LED2,HIGH);
  delay(2000);
  digitalWrite(LED2,LOW);
  // int result = myFunction(2, 3);
  // Serial.begin(9600);
  // Serial.println(result);
}

void loop() {
  delay(2000);
  digitalWrite(LED2,HIGH);
  delay(2000);
  digitalWrite(LED2,LOW);
  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }