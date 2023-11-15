
#include <NewPing.h>
const int echo=10;
const int trig=9;

int duration=0;
int distance=0;

const int LED_1 = 2;
const int LED_2 = 3;
const int LED_3 = 4;
const int LED_4 = 5;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);

  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);


  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/28.5;

  Serial.println(distance);

  if (distance<=7){
    digitalWrite(LED_1,HIGH);
  } else {digitalWrite(LED_1,LOW);}

    if (distance<=21){
    digitalWrite(LED_2,HIGH);
  } else {digitalWrite(LED_2,LOW);}

    if (distance<=28){
    digitalWrite(LED_3,HIGH);
  } else {digitalWrite(LED_3,LOW);}

    if (distance<=35){
    digitalWrite(LED_4,HIGH);
  } else {digitalWrite(LED_4,LOW);}
}
