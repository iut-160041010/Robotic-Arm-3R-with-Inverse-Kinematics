#include<Servo.h>              //Servo library
 
Servo servo3;//initialize a servo object for the connected servo  
Servo servo1;    
Servo servo2;             
int angle = 0;    
 
void setup() 
{ 
  
   Serial.begin(9600);
   servo3.attach(9);      // attach the signal pin of servo to pin9 of arduino
   servo1.attach(10);  
   servo2.attach(8);  
} 
  
void loop() 
{ 
  for(int yy=0;;yy+=5)
   {
    double x,y,z,angle1rad,angle2rad,angle3rad,r1,r2,r3,a1,a2,a3,angle1,angle2,angle3;
    a1=15;
    a2=10;
    a3=10;
    x=10;
    z=12;
    if(yy>15)break;
    y=yy;
    
    
   
    angle1rad = atan2(y,x);
    r1 = sqrt(y*y+x*x);
    r2 = z -a1;
    r3 = sqrt(r2*r2+r1*r1);
    angle2rad = atan2(r2,r1)+ acos((a3*a3 - a2*a2 -r3*r3)/(-2*a2*r3));
    angle3rad = PI + acos((r3*r3 - a2*a2 -a3*a3)/(-2*a2*a3));
    angle1 = angle1rad*180/PI;
    angle2 = angle2rad*180/PI;
    angle3 = angle3rad*180/PI;
    angle3 = 180 + (angle3-360);
    servo2.write(angle1);
    servo3.write(angle2);
    servo1.write(angle3); 
    //Serial.println("angle1 "+String(angle1)+ " angle2 "+String(angle2)+" angle3 "+String(angle3));
    delay(500);
   

  }
for(int yy=15;;yy-=5)
   {
    double x,y,z,angle1rad,angle2rad,angle3rad,r1,r2,r3,a1,a2,a3,angle1,angle2,angle3;
    a1=15;
    a2=10;
    a3=10;
    x=10;
    z=12;
    if(yy<0)break;
    y=yy;
    
    
   
    angle1rad = atan2(y,x);
    r1 = sqrt(y*y+x*x);
    r2 = z -a1;
    r3 = sqrt(r2*r2+r1*r1);
    angle2rad = atan2(r2,r1)+ acos((a3*a3 - a2*a2 -r3*r3)/(-2*a2*r3));
    angle3rad = PI + acos((r3*r3 - a2*a2 -a3*a3)/(-2*a2*a3));
    angle1 = angle1rad*180/PI;
    angle2 = angle2rad*180/PI;
    angle3 = angle3rad*180/PI;
    angle3 = 180 + (angle3-360);
    servo2.write(angle1);
    servo3.write(angle2);
    servo1.write(angle3); 
    //Serial.println("angle1 "+String(angle1)+ " angle2 "+String(angle2)+" angle3 "+String(angle3));
    delay(500);
   

  }

                  



}
