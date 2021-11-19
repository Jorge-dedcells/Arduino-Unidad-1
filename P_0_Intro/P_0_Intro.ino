//Declaracion de variables
//byte int short<long float double
//boolean bool char String
//->> int float

int nombreVar;
int var2 = 5;

byte n;

void setup() {
  // put your setup code here, to run once:
n = 0;
Serial.begin(9600);  //Inicia la comunicacion serial atravez de baudios
}

void loop() {
  // put your main code here, to run repeatedly:
n++;
Serial.println(n);
delay(10);  //detiene la ejecucion del ciclo por el tiempo
}
