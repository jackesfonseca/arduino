/**
 * Resistor de 10 ohms no botão (PULLDOWN)
 * Resistor de 470 ohms nos LED's
 */

int estadoBotao;

void setup() 
{
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
estadoBotao = digitalRead(7);//a variável recebe a informação do botaão quando está pressionado ou não

digitalWrite(9, estadoBotao);
digitalWrite(10, !estadoBotao);
digitalWrite(11, estadoBotao);
}
