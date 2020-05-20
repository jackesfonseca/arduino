int atraso_amarelo = 1000;
int atraso_vermelho = 6000;
int atraso_verde = 8000;
int atraso = 100;
 
void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(11,HIGH);
  delay(atraso);
  digitalWrite(11,LOW);

  digitalWrite(10, HIGH);
  delay(atraso);
  digitalWrite(10, LOW);
  
  digitalWrite(9, HIGH);
  delay(atraso);
  digitalWrite(9, LOW);
}
