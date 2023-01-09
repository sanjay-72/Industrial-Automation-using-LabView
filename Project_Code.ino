#include<Servo.h>
Servo Red,Green,Blue;
const int redPin = 5,greenPin = 6,bluePin = 7,Enable = 3;
int redState = 0,greenState = 0,blueState = 0,enableState = 0;
void setup() 
{
  pinMode(Enable,INPUT);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  pinMode(redPin,INPUT);
  pinMode(greenPin,INPUT);
  pinMode(bluePin,INPUT);
  Red.attach(9);
  Red.write(0);
  Green.attach(10);
  Green.write(0);
  Blue.attach(11);
  Blue.write(0);
}

void loop() {
  enableState = digitalRead(Enable);
  if(enableState == HIGH)
  {
    redState = digitalRead(5);
    greenState = digitalRead(6);
    blueState = digitalRead(7);
    if(redState == HIGH)
    {
      Red.write(180);
      delay(2000);
      Red.write(0);
      delay(1000);
    }
    else if(greenState == HIGH)
    {
      Green.write(180);
      delay(2000);
      Green.write(0);
      delay(1000);
    }
    else if(blueState == HIGH)
    {
      Blue.write(180);
      delay(2000);
      Blue.write(0);
      delay(1000);
    }
  }
}
