void setup() {
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
}
void loop() {
analogWrite(10,100);
digitalWrite(11,LOW);
delay(2000);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(2000);
digitalWrite(10,LOW);
analogWrite(11,100);
delay(2000);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(2000);
}
