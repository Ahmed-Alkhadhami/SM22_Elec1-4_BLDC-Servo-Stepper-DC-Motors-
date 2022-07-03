void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}


//                  CASE 1
void case1()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  analogWrite(9,50);
  delay(2000);
  
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  analogWrite(9,150);
  delay(2000);
  
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}


//                  CASE 2
void case2()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  for(int i=254; i>=0; i-=5)
  {
    analogWrite(9,i);
    delay(50);
  }
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(3500);
  
  // ---------
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  for(int i=0; i<=254; i+=5)
  {
    analogWrite(9,i);
    delay(50);
  }
  
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}

void loop()
{
  case1 ();
  delay(3500);
  case2 ();
  delay(3500);
}
