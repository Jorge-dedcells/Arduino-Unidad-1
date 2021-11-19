//Variables
int x1, x2; //punto X1 y X2
int y1, y2; //punto Y1 y Y2
float PMX, PMY; //punto medio X y Y

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  PMX=0; 
  PMY=0;
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available ()>0){  
  Serial.print("Introduce X1: "); 
  x1 = Serial.readString().toInt();
  Serial.println();
  Serial.print("Introduce X2: ");
  x2 = Serial.readString().toInt();
  Serial.println();
  Serial.print("Introduce Y1: ");
  y1 = Serial.readString().toInt();
  Serial.println();
  Serial.print("Introduce Y2: ");
  y2 = Serial.readString().toInt();
  Serial.println();
  PMX=(x1+x2)/2;
  PMY=(y1+y2)/2;
  
  Serial.println("El punto medio es: ");
  Serial.print(PMX);Serial.print(", ");Serial.print(PMY); 
}  
delay(1000);
}
