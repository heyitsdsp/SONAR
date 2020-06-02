#include <Servo.h>

float d1,d2,d,angle;

int trigpin1 = 5,echopin1 = 6;
int trigpin2 = 10, echopin2 = 11;

Servo myservo;  

int pos = 0;    

void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 10) 
  {
    d1=calcdistance();
    myservo.write(pos);
    angle=pos;   
    d2=calcdistance();

    d=(d1+d2)/2;
    Serial.print(angle);
    Serial.print(",");
    Serial.print(d);
    Serial.println(",");
    delayMicroseconds(10);                       
  }
  for (pos = 180; pos >= 0; pos -= 10) 
  { 
    d1=calcdistance();
    myservo.write(pos); 
    angle=pos;  
    d2=calcdistance();

    d=(d1+d2)/2;
    Serial.print(angle);
    Serial.print(",");
    Serial.print(d);
    Serial.println(",");
    delayMicroseconds(10);                  
  }
}

float calcdistance()
{ 
  float duration,distance;
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);

  distance=(duration/2)*0.0343;
  return distance;
}
