//DECLARACION DE VARIABL
byte state=0;
int x, y, n;


void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}


void Print(String cad){Serial.print("Dame "+String(cad)+": "); }

bool Correct(byte num){return state==num && Serial.available()>0;}

int GetNumber(){Serial.println(); ; return Serial.readString().toInt();}


void loop() {
// put your main code here, to run repeatedly:

if(state==0){ Print("X"); state=1;}
else if(Correct(1)){ x= GetNumber(); state=2;}
else if(state==2){Print("Y"); state=3;}
else if(Correct(3)){y= GetNumber(); if(y==0){n=1; state=5;} else{n=1; state=4;}}
else if(state==5){ Serial.println("El resultado es: "+String(n)); Serial.println(); state=0;}
else if(state==4){n*=x; y--; if(--y<=1){state=5; Serial.println("D");} }

delay(1000);
}
