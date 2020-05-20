int pinVerde = 11;
int pinAmarelo = 10;
int pinVermelho = 9;
int pinBotao = 7;
int pinPedestreVerde = 3;
int pinPedestreVermelho = 2;

int atraso = 100;

int faseSemaforo;
int estadoBotao;
int estadoAnteriorBotao;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinPedestreVerde, OUTPUT);
  pinMode(pinPedestreVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);

  faseSemaforo = 1;
  estadoAnteriorBotao = digitalRead(pinBotao);
}

void loop()
{
  // put your main code here, to run repeatedly:
  
  estadoBotao = digitalRead(pinBotao);
  
  if((estadoBotao == HIGH) && (estadoAnteriorBotao == LOW))
  {
    if(faseSemaforo < 4)
    {
      faseSemaforo = faseSemaforo + 1;
    }
    else
    {
      faseSemaforo = 1;
    }
  }

  estadoAnteriorBotao = estadoBotao;
   
  if(faseSemaforo == 1)
  {
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);
  
    digitalWrite(pinPedestreVerde, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }
  if(faseSemaforo == 2)
  {
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedestreVerde, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }
  if(faseSemaforo == 3)
  {
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);

    digitalWrite(pinPedestreVerde, HIGH);
    digitalWrite(pinPedestreVermelho, LOW);
  }
  delay(atraso);
}
