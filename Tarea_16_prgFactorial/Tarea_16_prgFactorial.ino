//variables 
int n;
long fac;
byte estado;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void Comun(String mensaje){Serial.println(mensaje); Serial.println(); estado=0;}
  
  

void loop() {
  // put your main code here, to run repeatedly:

  if(estado==0){Serial.print("Introduce un numero: "); estado=1;}
  else if(estado==2){ fac *= n; if(--n<2){estado=3;} }
  else if(estado==3) Comun("  El resultado es "+ String(fac));
  else if(Serial.available()>0)
  {n =Serial.readString().toInt();
     fac=1;
     
    if(n<1 || n>10)Comun("Error numero no valido");
    else estado=2;
    }
    delay (100);
}
