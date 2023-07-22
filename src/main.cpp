#include <Arduino.h>
#define LED1 13
// put function declarations here:
// int myFunction(int, int);

void setup() { 
  pinMode(A1,INPUT);
  pinMode(LED1,OUTPUT);
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  // Serial.begin(9600);
  // Serial.println(result);
}

void loop() {
  delay(2000);
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }