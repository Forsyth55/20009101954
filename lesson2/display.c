int i;
void setup()
{
  for(i=7;i<14;i++)
  {
	pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  { 
    i=Serial.read();
    i=i-'0';
	switch(i)
    {
    case 0:
      	for(i=7;i<14;i++){
      		digitalWrite(i,LOW);
      	} 
      	break;
    case 1:
      	for(i=7;i<14;i++){
      		digitalWrite(i,LOW);
      	} 
      	digitalWrite(12,HIGH);
      	digitalWrite(11,HIGH);
      	break;
    case 2:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	digitalWrite(11,LOW);
      	digitalWrite(8,LOW);
      	break;
    case 3:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	digitalWrite(8,LOW);
      	digitalWrite(9,LOW);
      	break;    
	case 4:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	digitalWrite(9,LOW);
      	digitalWrite(10,LOW);
      	digitalWrite(13,LOW);
      	break;   
	case 5:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	digitalWrite(12,LOW);
      	digitalWrite(9,LOW);
      	break;    
	case 6:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	digitalWrite(12,LOW);
      	break;
    case 7:
      	for(i=7;i<14;i++){
      		digitalWrite(i,LOW);
      	} 
      	digitalWrite(13,HIGH);
      	digitalWrite(12,HIGH);
      	digitalWrite(11,HIGH);
      	break;    
	case 8:
      	for(i=7;i<14;i++){
      		digitalWrite(i,HIGH);
      	} 
      	break;
    }
  }
}
