//Variables
String dato;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0){
  dato = Serial.readString();

  Serial.println(dato);
  
 }
delay(100);
}
