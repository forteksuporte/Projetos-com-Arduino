// Projeto 05 - Acendendo LED com Botao
// www.lojafortek.com

const int ledPin = 2; //led no pino 2
const int botao = 12; //botao no pino 12
int estadoBotao; //Variavel para ler o status do pushbutton

void setup(){
    pinMode(ledPin, OUTPUT); //Pino do led sera saida
    pinMode(botao, INPUT); //Pino com botao sera entrada
}

void loop(){
    estadoBotao = digitalRead(botao); //Le o estado do botao - HIGH OU LOW

    if (estadoBotao == HIGH){ //Se botao estiver pressionado (HIGH)
        digitalWrite(ledPin, HIGH); // acende o led do pino 2.
    }
    else{ //Se nao estiver pressionado (LOW)
        digitalWrite(ledPin, LOW); //Deixa o led do pino 2 apagado
    }
} 
