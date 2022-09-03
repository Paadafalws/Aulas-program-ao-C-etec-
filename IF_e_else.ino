int LedVer = 2 ;
int LedVdd = 3;
int LedAm= 4 ;
int LedAz= 5 ;
int LedLn= 6 ;
int LDR = A5;
int LD;
int BotaoP;
int BotaoI;

  void setup()
{
   pinMode(LedVer,OUTPUT);
   pinMode(LedVdd,OUTPUT);
   pinMode(LedAm,OUTPUT);
   pinMode(LedAz,OUTPUT);
   pinMode(LedLn,OUTPUT);
   pinMode(8,INPUT);
   pinMode(9,INPUT);
   pinMode(LDR,INPUT);
    Serial.begin (9600);
}
void loop()
{
  BotaoP = digitalRead(8);
  BotaoI = digitalRead(9);
  LD = analogRead(LDR);
  Serial.println(LD);
  
  if (LD <= 410 && BotaoP == 0 )
  {
    digitalWrite(LedVer,HIGH);
    digitalWrite(LedAm,HIGH);
    digitalWrite(LedLn,HIGH);
    delay (2000);
    
}
 if (LD <= 410 && BotaoI == 0 ) 
 {
    digitalWrite(LedVdd,HIGH);
    digitalWrite(LedAz,HIGH);
    delay (2000);
 }
  if (LD >= 820 && BotaoP == 0 ) 
  {
    digitalWrite(LedVdd,HIGH);
    digitalWrite(LedAz,HIGH);
    delay (2000);
  }
  if (LD >= 820 && BotaoI == 0 ) 
  {
    digitalWrite(LedVer,HIGH);
    digitalWrite(LedAm,HIGH);
    digitalWrite(LedLn,HIGH);
    delay (2000);
  }
  else 
  {
   digitalWrite(LedVer,HIGH);
    digitalWrite(LedAm,HIGH);
    digitalWrite(LedLn,HIGH);
    digitalWrite(LedVdd,HIGH);
    digitalWrite(LedAz,HIGH);
  delay(300);
    digitalWrite(LedVer,!HIGH);
    digitalWrite(LedAm,!HIGH);
    digitalWrite(LedLn,!HIGH);
    digitalWrite(LedVdd,!HIGH);
    digitalWrite(LedAz,!HIGH);
    delay(300);
  }
}
