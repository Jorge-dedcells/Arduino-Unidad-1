
int led[5]= {9,10,11,12,13};
 

int led_prender; // 0,1,2,3,4,5
void setup() {
  // put your setup code here, to run once:
  //siempre que se vaya a atrabajar con un pin digital es necesario ESTABLECER si este sera una entrada o una salida 
  //es entrada cuando nos proporcionara "INFORMACION" (SENSOR), y es salida cuando genera algun "efecto" (actuador)

  //entrada --> INPUT
  //salida --> OUTPUT
for (int i = 0; i < 5 ; i++) {
  pinMode(led[i], OUTPUT);//establece el modo de trabajo del pin asociado a la variable del LED como salida 
}
      //randomSeed (6); // normalizada 
      randomSeed (analogRead(A0)); // la semilla tendra un valor de 0 a 1023 
}

void loop() {
  // put your main code here, to run repeatedly:
  //cuando se trabaja con actuadores digitales se cuenta con la instruccion digitalWrite para establecer el 
  // valor del actuador 

  // valor = {PRENDIDO(1 o HIGH)|APAGADO(0 O LOW)}

   for (int i = 0; i < 5 ; i++) {
  digitalWrite(led[i],0); 
}
   
   led_prender = random(5);//[0 - (n-1)]
   digitalWrite(led[led_prender],1); 
    //random(min, max) [min - (max-1)]
   
delay (2000);
}
