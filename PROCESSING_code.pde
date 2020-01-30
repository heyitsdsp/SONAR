import processing.serial.*;
Serial port;  
int lf = 10;    
String myString = null;
float x,y,angle;
float num;
float num2;
int i = 0;

void setup() {
  port = new Serial(this,"COM5", 9600);
  
  size(820, 820);
  background(0);
  translate(410, 410);
  stroke(255);
  strokeWeight(5);  
}

void draw() {
  
  while (port.available() > 0) {
    myString = port.readStringUntil(10);
    if (myString != null) {
    String[] q = splitTokens(myString, ",");   
    
    
    num=float(q[0]);  
    num2 = float(q[1]);  
    
   
    angle = num * 0.0174533;
    x = (sin(angle)*num2 + width/2);
    y = (cos(angle)*num2 + height/2);
   
    }
    if(num == 0 )
    {
      background(0);    
      translate(410, 410);
    }
    point(x, y);
    
  }
  port.clear();
}
