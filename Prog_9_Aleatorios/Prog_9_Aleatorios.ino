
int led_1 = 9;
int led_2 = 10;
int led_3 = 11;
int led_4 = 12;
int led_5 = 13;

int led_prender; // 0,1,2,3,4,5
void setup() {
  // put your setup code here, to run once:
  //siempre que se vaya a atrabajar con un pin digital es necesario ESTABLECER si este sera una entrada o una salida 
  //es entrada cuando nos proporcionara "INFORMACION" (SENSOR), y es salida cuando genera algun "efecto" (actuador)

  //entrada --> INPUT
  //salida --> OUTPUT

  pinMode(led_1, OUTPUT);//establece el modo de trabajo del pin asociado a la variable del LED como salida 
   pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);
     pinMode(led_4, OUTPUT);
      pinMode(led_5, OUTPUT);

      //randomSeed (6); // normalizada 
      randomSeed (analogRead(A0)); // la semilla tendra un valor de 0 a 1023

}

void loop() {
  // put your main code here, to run repeatedly:
  //cuando se trabaja con actuadores digitales se cuenta con la instruccion digitalWrite para establecer el 
  // valor del actuador 

  // valor = {PRENDIDO(1 o HIGH)|APAGADO(0 O LOW)}

   digitalWrite(led_1,0);
   digitalWrite(led_2,0);
   digitalWrite(led_3,0);
   digitalWrite(led_4,0);
   digitalWrite(led_5,0);

   led_prender = random(5);//[0 - (n-1)]
    //random(min, max) [min - (max-1)]
   switch(led_prender){
    case 0:
    digitalWrite(led_1,1);
    break;
    case 1:
    digitalWrite(led_2,1);
    break;
    case 2:
    digitalWrite(led_3,1);
    break;
    case 3:
    digitalWrite(led_4,1);
    break;
    case 4:
    digitalWrite(led_5,1);
    break;
    }
delay (2000);
}
