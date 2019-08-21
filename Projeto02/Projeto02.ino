// Projeto 02 - Codigo morse S.O.S
// www.lojafortek.com

int led = 13; // define a porta que o LED esta ligado
 
void setup() {
  // inicializa o pino digital como SAIDA do microcontrolador
  pinMode(led, OUTPUT);
}
void loop() {
  // 3 pontos (letra S)
  for (int x=0; x<3; x++) {
  digitalWrite(led, HIGH); // acende o LED
  delay(150);              // espera por 150 ms
  digitalWrite(led, LOW);  // apaga o LED
  delay(100);              // espera por 100ms
  }
  
  delay(200); // espera de 200ms entre as letras
  
  // 3 traços (letra O)
  for (int x=0; x<3; x++) {
   digitalWrite(led, HIGH); // acende o LED
   delay(400);        // espera por 150ms
   digitalWrite(led, LOW);  // apaga o LED
   delay(100);        // espera por 100ms
  }

  delay(200); //espera 200 ms entre as letras
  
  // 3 pontos (letra S)
  for (int x=0; x<3; x++) {
  digitalWrite(led, HIGH);  // acende o LED
  delay(150);               // espera por 150 ms
  digitalWrite(led, LOW);   // apaga o LED
  delay(100);               // espera por 100ms
  }
  
  //espera 3 segundos para repetir o sinal S.O.S
  delay(3000);
}
