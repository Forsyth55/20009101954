int i;
void setup()
{
  for(i=3;i<10;i++)
  {
	pinMode(i, OUTPUT);
  }
}

void loop()
{
  
  for(i=9;i>2;i--)
  {
   digitalWrite(i, HIGH);
   delay(500); 
   digitalWrite(i, LOW); 
  }
}
