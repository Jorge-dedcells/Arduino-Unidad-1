byte state=0;
int mayor=-10,lim, n;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void Move(){if(--lim<=0){state=4;}}
int Capturar(){return Serial.readString().toInt(); }

void loop() {

  if(state==0)
  { Serial.print("Dame la cantidad de numeros: ");
    state++;
  }
  else if(state==4)
  {
    Serial.println("\r\nEl mayor es: "+String(mayor));
    Serial.println();
    state=0;
   }
   else if(Serial.available()>0)
   {
      if(state==1)
      {
        lim = Serial.readString().toInt();

        if (lim<=0){ Serial.println("Numero no valido\r\n"); state=0;}
        else{state++;}
      }
      else if(state==2){mayor= Capturar(); state++; Move(); Serial.println("d");}
      else 
      {
        n= Capturar();

        if(n>mayor){mayor= n;}
        Move();
       
      }
    
    }
    delay(100);

}
