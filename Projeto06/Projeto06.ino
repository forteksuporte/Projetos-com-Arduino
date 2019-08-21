// Projeto 06 - Lendo valores de um Potenciômetro
// www.lojafortek.com

const int Potenciomento = 0; // Define pino analogico 0 para o potenciomentro
const int LEDAzul = 6; // Define pino digital 6 para o LED azul
const int LEDAmarelo = 7; // Define pino digital 7 para o LED amarelo

void setup() {
  Serial.begin( 9600 ); // Inicia comunicacao serial
  pinMode(LEDAzul, OUTPUT); //Define sinal de saida para o LED    
  pinMode(LEDAmarelo, OUTPUT); //Define sinal de saida para o LED        

}
void loop() {
  int valorPotenciometro = analogRead( Potenciomento ); // Le dados do potenciometro
  
  Serial.println( valorPotenciometro ); // Exibe o valor no monitor serial
  if ( valorPotenciometro < 512 ){ // Se o valor do potenciometro for menor que 512, liga Led azul
    digitalWrite(LEDAzul, HIGH); 
    digitalWrite(LEDAmarelo, LOW);     
  }
  else {
    digitalWrite(LEDAmarelo, HIGH); //Se o valor for maior que 512, liga Led amarelo
    digitalWrite(LEDAzul, LOW);         
  }
}
