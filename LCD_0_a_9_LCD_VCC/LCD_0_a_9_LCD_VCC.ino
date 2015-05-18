int ledA = 13;
int ledB = 12;
int ledC = 11;
int ledD = 10;
int ledE = 9;
int ledF = 8;
int ledG = 7;
int ledP = 6;
void setup(){
  for(int i=6; i<=13; i++){
    pinMode(i,OUTPUT);
  }
}
void loop(){
 for(int i=0; i<=11; i++){  // contagem crescente
   //for(int i=11; i>=0; i--){  contagem regressiva
   leds(i);
   delay(500);
 }
}

void leds(int i){
  for(int l=6; l<=13; l++){
    digitalWrite(l,HIGH);
  }
  if(i == 0 || i == 2 || i == 3 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9 || i == 11){
    digitalWrite(ledA,LOW);
  }
  if(i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 7 || i == 8 || i == 9){
    digitalWrite(ledB,LOW);
  }
  if(i == 0 || i == 1 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9){
    digitalWrite(ledC,LOW);
  }
  if(i == 0 || i == 2 || i == 3 || i == 5 || i == 6 || i == 8 || i == 9 || i == 11){
    digitalWrite(ledD,LOW);
  }
  if(i == 0 || i == 2 || i == 6 || i == 8 || i == 11){
    digitalWrite(ledE,LOW);
  }
  if(i == 0 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9 || i == 11){
    digitalWrite(ledF,LOW);
  }
  if(i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9 || i == 11){
    digitalWrite(ledG,LOW);
  }
  if(i == 10){
    digitalWrite(ledP,LOW);
  }
}

