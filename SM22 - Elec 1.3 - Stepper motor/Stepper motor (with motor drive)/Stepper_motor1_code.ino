 
void setup() {
  // Setting the two pins condition
  pinMode(8,OUTPUT);   // direction Pin = 8
  pinMode(9,OUTPUT);  // steps Pin = 9
}

void loop() {
  digitalWrite(8,HIGH);            // To make the motor turns in CW direction
  
  // it takes 200 steps/rev

  for(int i = 0; i < 200; i+=1.8)  // make a full cycle in CW direction
  {
    digitalWrite(9,HIGH); 
    digitalWrite(9,LOW); 
    delay(20); 
  }
  delay(2500);
  
  digitalWrite(8,LOW);              //To make the motor turns in CCW direction
  for(int i = 400; i > 0; i-=1.8)   // make a full cycle
  {
    digitalWrite(9,HIGH); 
    digitalWrite(9,LOW); 
    delay(20); 
  }
  delay(2500);
}
