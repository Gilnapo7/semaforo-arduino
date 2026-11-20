// C++ code
//SEMAFORO - VERSAO 1
int VERMELHO = 12;
int AMARELO = 11;
int VERDE = 10;
int Ped_verde= 9;
int Ped_verm = 8;

void setup()
{
  pinMode(VERMELHO, OUTPUT);// LED VERMELHO SAIDA
  pinMode(AMARELO, OUTPUT);// LED AMARELO SAIDA
  pinMode(VERDE, OUTPUT);// LED VERDE SAIDA
  pinMode(Ped_verde, OUTPUT);// LED PEDESTRE_VERDE SAIDA
  pinMode(Ped_verm, OUTPUT);// LED PEDEESTRE_VERMELHO SAIDA
}

void loop()
{
  // fase verde_CARRO e vermelho_PEDESTRE
  digitalWrite(VERDE, HIGH);// fase verde: carros seguem
  digitalWrite(Ped_verm, HIGH);// fase vermelha: pedestre espera
    delay(4000); // LED aceso por 4 segundos
  digitalWrite(VERDE, LOW);// Apaga o LED verde
  
  // fase amarelo_CARRO E vermelho_PEDESTRE
  digitalWrite(AMARELO, HIGH);// fase amarelo: motorista atenção
  delay(2000); // LED aceso por 4 segundos
  digitalWrite(AMARELO, LOW);// Apaga o LED amarelo
  digitalWrite(Ped_verm, LOW);// Apaga o LED Ped_vermelho
  
  //fase vermelho_CARRO E verde_PEDESTRE
  digitalWrite(VERMELHO, HIGH);// fase vermelho: carros param
  digitalWrite(Ped_verde, HIGH);// fase verde: pedestre seguem
  delay(5000); // LED aceso por 4 segundos
  digitalWrite(VERMELHO, LOW);// Apaga o LED vermelho
  digitalWrite(Ped_verde, LOW);// Apaga o LED Ped_verde - 

}
