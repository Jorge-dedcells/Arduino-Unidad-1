int n;
byte state;
int a,b;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(state==0){Serial.print("Dame un numero: "); state=1;}
   else if(state==2)
   { 
       Serial.println(String(a));
       
       if(--n<=0){state=0; Serial.println();}
       else{int  aux=a; a+=b;  b=aux;}
    }
    
   else if(Serial.available()>0 )
   {
    n = Serial.readString().toInt();
    a=0; b=1;
    
     if(n<0 || n>10){state= 0;}
     else{ state=2;}

     Serial.println();
    }
   delay (100);
}
