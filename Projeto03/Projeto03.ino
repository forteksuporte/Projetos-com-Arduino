// Projeto 03 - Display de 7 segmentos
// www.lojafortek.com

boolean ligaPonto = false;

// Variaveis liga e desliga p/ display 7 segmentos
const int l = 1, d = 0; // Display 7 segmentos (catodo comum)
//const int l = 0, d = 1; // Display 7 segmentos (anodo comum)

byte displaySeteSeg[10][7] = { 
 { l,l,l,l,l,l,d },  //DIGITO 0
 { d,l,l,d,d,d,d },  //DIGITO 1
 { l,l,d,l,l,d,l },  //DIGITO 2
 { l,l,l,l,d,d,l },  //DIGITO 3
 { d,l,l,d,d,l,l },  //DIGITO 4
 { l,d,l,l,d,l,l },  //DIGITO 5
 { l,d,l,l,l,l,l },  //DIGITO 6
 { l,l,l,d,d,d,d },  //DIGITO 7
 { l,l,l,l,l,l,l },  //DIGITO 8
 { l,l,l,d,d,l,l }   //DIGITO 9
};
 
void setup(){
  for (int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (byte contador = 0; contador < 10; contador++){ //faz a contagem de 0 a 9
     ligaSegmentosDisplay(contador); // chama a funcao para acionar o display 
  }
  delay(1000); //aguarda 1 segundo para reiniciar a contagem
}

void ligaSegmentosDisplay(byte digito){ //funcao para acionar o display com o digito correspondente
  byte pino = 2;
 
  for (byte contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){ 
    digitalWrite(pino, displaySeteSeg[digito][contadorSegmentos]); //percorre o array e liga (l) e desliga (d) segmentos do display
    ++pino; //incrementa o valor do pino (vai de 2 a 8)
  }
  blinkDP(); // chama a funcao para piscar ponto
}

void blinkDP() { // Faz o ponto piscar 2 vezes.
   for (int i=0; i<=3; i++) {
    if (ligaPonto)  {
      digitalWrite(9, l);
    }   else  {
      digitalWrite(9, d);
    }
    ligaPonto = !ligaPonto;
    delay(1000);
  }   
}
