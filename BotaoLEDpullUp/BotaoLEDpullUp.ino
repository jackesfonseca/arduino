/**
 * Resistor 470 ohms nos LED's
 */


int estadoBotao;

void setup() 
{
  // put your setup code here, to run once:
pinMode(7,INPUT_PULLUP); //o jumper do botão estará conectado diretamente ao terra do arduino sem um resistor de 10 ohms na placa
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
