int matriz[2][2];
int res;
byte state=0;
byte count;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

   if(state==0){Serial.println("Dame la matriz"); state=1; }
   else if(state==2)
   {
       res=matriz[0][0]*matriz[1][1]-matriz[1][0]*matriz[0][1];
       Serial.println("\r\nLa determinante es: "+String(res));
       Serial.println();
       state=0; count=0;
   }
   else if(Serial.available()>0)
   {
     matriz[count/2][count%2]= Serial.readString().toInt();
     ++count;
     Serial.println();

      if(count==4){state=2; }
      
    
    }

   delay(200);
}
