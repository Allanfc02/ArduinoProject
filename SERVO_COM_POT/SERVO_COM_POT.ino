/*
Projeto Arduino controlando um servomotor com potenciômetro
Porta do servo PWM 3
Porta do Potenciometro (A0)
*/
 
//incluindo biblioteca para controle do servomotor
#include "Servo.h"
  
//Criando um objeto da classe Servo
Servo motor;  
  
//pino analógico onde o potenciômetro está conectado
int const potPin = 0;  
 
//pino digital associado ao controle do servomotor
int const motorPin    = 3;  
 
//variável usada para armazenar o valor lido no potenciômetro
int pot;            
  
void setup() { 
  //associando o pino digital ao objeto da classe Servo
  motor.attach(motorPin); 
} 
  
void loop() 
{ 
  
  Serial.begin(9600);
  //lendo o valor do potenciômetro (intervalo entre 0 e 1023)
  pot = analogRead(potPin); 
 
  //mapeando o valor para a escala do servo (entre 0 e 180)
  pot = map(pot, 0, 1023, 0, 180); 
 
  //definindo o valor/posição do servomotor
  motor.write(pot); 
  
  //imprimindo na serial Valor do Potenciometro
  Serial.println(pot);
  delay(15);   
}
