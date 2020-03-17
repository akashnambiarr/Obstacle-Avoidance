void setup() 
{
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(7,INPUT);
pinMode(9,INPUT);
}
void loop() {


//Serial.begin(9600); 
if (digitalRead(9)==HIGH && digitalRead(7)==HIGH){
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
}
else if (digitalRead(7)==HIGH){
  
 
 digitalWrite(6,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW); 
  analogWrite(5,200);
 
 //Serial.println("right");
 
}
else if (digitalRead(9)==HIGH){
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(11,LOW);
 analogWrite(10,200);
 //Serial.println("left")
}


else{

 digitalWrite(6,LOW);
 digitalWrite(11,LOW);
 analogWrite(5,40);
 analogWrite(10,40);
 //Serial.println("forward");
}
}
 
