
int led = 13;
void setup() {
  // put your setup code here, to run once:
  //siempre que se vaya a atrabajar con un pin digital es necesario ESTABLECER si este sera una entrada o una salida 
  //es entrada cuando nos proporcionara "INFORMACION" (SENSOR), y es salida cuando genera algun "efecto" (actuador)

  //entrada --> INPUT
  //salida --> OUTPUT

  pinMode(led, OUTPUT); //establece el modo de trabajo del pin asociado a la variable del LED como salida 

}

void loop() {
  // put your main code here, to run repeatedly:
  //cuando se trabaja con actuadores digitales se cuenta con la instruccion digitalWrite para establecer el 
  // valor del actuador 

  // valor = {PRENDIDO(1 o HIGH)|APAGADO(0 O LOW)}

  digitalWrite(led,1);
  //digitalWrite(led,HIGH);
  delay(500); //ms

  digitalWrite(led,0);

  delay (500);

  

}
