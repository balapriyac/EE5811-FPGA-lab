#include <Arduino.h>
#define X 2
#define Y 3
#define Z 4

int x,y,z,F;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(X,INPUT);
  pinMode(Y,INPUT);
  pinMode(Z,INPUT);
  // put your setup code here, to run once:
}

void loop() {
  x = digitalRead(X);
  y = digitalRead(Y);
  z = digitalRead(Z);
  
  F = !(x && (!y));
  
  if(F == 1)
	  digitalWrite(LED_BUILTIN,HIGH);
  else
	  digitalWrite(LED_BUILTIN,LOW);
  // put your main code here, to run repeatedly:
}
