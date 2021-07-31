#include<MsTimer2.h>
int tick0=0;
int tick1=0;
int tick2=0;
int val=0;
void onTimer(){
  digitalWrite(13,LOW);
  Serial.print("timer ");
  tick0++;
  if(tick0>99)
  {
    tick0=0;
  }
  tick1=tick0/10;
  tick2=tick0%10;
  Serial.println(tick0);
  digitalWrite(8,(tick1&0x1));
  digitalWrite(9,((tick1>>1)&0x1));
  digitalWrite(10,((tick1>>2)&0x1));
  digitalWrite(11,((tick1>>3)&0x1));
  digitalWrite(3,(tick2&0x1));
  digitalWrite(4,((tick2>>1)&0x1));
  digitalWrite(5,((tick2>>2)&0x1));
  digitalWrite(6,((tick2>>3)&0x1));
}
void setup()
{
  Serial.begin(9000); 
  pinMode(2,OUTPUT); 
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  
  
  MsTimer2::set(500,onTimer);
  MsTimer2::start();
}

void loop()
{
    val=digitalRead(2);
    if(val=HIGH)
    {
      tick0=0;
    }
}
