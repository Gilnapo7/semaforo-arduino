// C++ code
//SEMAFORO - VERSAO 1
int VERMELHO = 12;
int AMARELO = 11;
int VERDE = 10;

void setup()
{
  pinMode(VERMELHO, OUTPUT);// LED VERMELHO SAIDA
  pinMode(AMARELO, OUTPUT);// LED AMARELO SAIDA
  pinMode(VERDE, OUTPUT);// LED VERDE SAIDA
}

void loop()
{
  // fase verde
  digitalWrite(VERDE, HIGH);// fase verde: carros seguem
  delay(4000); // LED aceso por 4 segundos
  digitalWrite(VERDE, LOW);// Apaga o LED verde
  

  // fase amarelo
  digitalWrite(AMARELO, HIGH);// fase amarelo: atenção
  delay(2000); // LED aceso por 4 segundos
  digitalWrite(AMARELO, LOW);// Apaga o LED amarelo
  
  //fase vermelho
  digitalWrite(VERMELHO, HIGH);// fase vermelho: carros param
  delay(5000); // LED aceso por 4 segundos
  digitalWrite(VERMELHO, LOW);// Apaga o LED vermelho

}
