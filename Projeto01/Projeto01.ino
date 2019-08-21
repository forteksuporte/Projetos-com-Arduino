// Projeto 01 - Semafaro com LED's
// www.lojafortek.com
void setup()
{
 pinMode(13,OUTPUT); // DEFINE O PINO 13 COMO OUTPUT, OU SEJA, VARIAVEL DE SAIDA.
 pinMode(12,OUTPUT); // IDEM PARA O PINO 12.
 pinMode(11,OUTPUT); // IDEM PARA O PINO 11.
}
void loop() // Aqui comeca o loop de repeticao que estara sendo executado o tempo todo pelo arduino.
{
 digitalWrite(13,HIGH); // LED vermelho acende.
 delay(4000); // Um tempo de espera de 4 segundos.
 digitalWrite(13,LOW); // LED vermelho apaga.

 digitalWrite(11,HIGH); // LED verde acende.
 delay(4000); // Um tempo de espera de 4 segundos.
 digitalWrite(11,LOW); //  LED verde apaga.

 digitalWrite(12,HIGH); // LED amarelo acende.
 delay(2000); // Um tempo de espera de 2 segundos.
 digitalWrite(12,LOW); // LED amarelo apaga.
 }







 
