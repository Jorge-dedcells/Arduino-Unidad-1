//Calcular el cuadrado de numero ingresado por el usuario
//Variables
bool auxiliar;
int suma;
int dato;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  auxiliar = false;
  suma = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available ()>0){
    dato = Serial.readString().toInt();

    if(!auxiliar){
      suma = dato;
      auxiliar = true;
      }
      else{
        suma += dato;
        auxiliar = false;
        Serial.println(suma);
      }
  }
 
delay(100);
}
