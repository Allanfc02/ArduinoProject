
#include <Stepper.h>             //Inclusão da biblioteca
 
const int passosPorVolta = 200;  
/*
Numero de passos por volta, 
geralmente é dado no próprio motor 
As vezes é fornecido o angulo de passo, 
divida 360 por esse numero para saber 
o numero de passos por volta
*/                               
// Declaração de um motor de passo nos pinos 8 a 11:
Stepper motor(passosPorVolta, 8,9,10,11);            
 
void setup() {
  // Velocidade do motor em pwm: Obs. Pode variar de acordo com  de 
                                  //a capacidade do motor
motor.setSpeed(150);
  // Inialização da serial para debug:
  Serial.begin(9600);
  
}
 
void loop() {
  int x = analogRead(A0);
    if(x > 850){  // se o potenciomentro for menor
                 //   que 850 gira sentido horário:
      Serial.println("horario");
      motor.step(passosPorVolta);
 
    }
    if(x < 150){  // se o potenciometro for menor
                 //  que 150 sentido anti-horário:
      Serial.println("anti-horario");
      motor.step(-passosPorVolta);
  
    }
    if (x > 150 && x < 850){     // se o potenciometro for 
      Serial.println("Parado"); // maior que 150 e menor que 850
      motor.step(0);           //  mantem o motor parado
   
  }
}
