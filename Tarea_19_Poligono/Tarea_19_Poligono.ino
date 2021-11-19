float area;
int A, LP;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  area=0;
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available ()>0){
    
   Serial.print(" Dame el lado del poligono: ");
   LP = Serial.readString().toInt();
   Serial.println();
   Serial.print("Dame el apotema: ");
   A = Serial.readString().toInt();
   area=(LP * LP * A) / (4 * tan((180 / A) * 3.14159 / 180));
   Serial.println();
   Serial.print("Resulado: ");
   Serial.println(area);

}
delay(1000);
}
