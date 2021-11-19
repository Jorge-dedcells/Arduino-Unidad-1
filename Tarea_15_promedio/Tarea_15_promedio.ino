//variables 
int sum;
byte estado, cont;
float res;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   sum=cont=0;
}

void loop() {
  // put your main code here, to run repeatedly:

if(estado==0){Serial.print("Favor de introducir un numero: "); estado=1;}
else if(estado ==2){res= sum*1.0/5; Serial.println("El resultado es: "+String(res)); estado=cont=0; Serial.println();}
else if(Serial.available()> 0)
{ sum+= Serial.readString().toInt();
  Serial.println();

  if(++cont==5){estado=2;}
  else{estado=0;}

}

delay (100);
}
