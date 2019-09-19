
void setup (){
  pinMode (13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop (){
  digitalWrite (13, HIGH);
  delay (400);
  digitalWrite (13,LOW); 
  delay (400);
  digitalWrite(8,HIGH);
  delay(300);
  digitalWrite(8,LOW);
  delay(300);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  delay(200);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  
}