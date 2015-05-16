  void setup() {
   pinMode(9,OUTPUT);
   
   Serial.begin(9600);
  }
  
  void loop() {
    
    int x = analogRead(A5);        // define x como entrada de valo do pot.
    int pot = map(x,0,1023,0,255); // funcao map = Converte o valor
                                   // de 0 a 1023 lido no potenciometro 
                                    // para 0 a 255 que sera aplicado ao motor
    analogWrite(9,pot);
    delay(100);
    
    Serial.println(x);
  
  
  }
