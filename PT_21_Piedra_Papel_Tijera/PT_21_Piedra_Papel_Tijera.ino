enum Estados {Imprimir_Op,Leer_Op,Calcular,Reiniciar};
int op = 0;
int val = 0;
int score [2] = {0, 0};
int estado = 0;
String temporal;
void setup() {
  Serial.begin(9600);
  Serial.setTimeout(250);
}

void loop() {
  switch (estado) {
    case Imprimir_Op:
      Serial.println("Selccione Piedra papel o tigera");
      Serial.println("0.-Piedra");
      Serial.println("1.-Papel");
      Serial.println("2.-Tigera");
      estado++;
      break;

    case Leer_Op:
      if (Serial.available() > 0) {
        temporal = Serial.readString();
        op = temporal.toInt();
        val = random(0, 3);
        estado++;
        Serial.println();
      }
      break;

    case Calcular:
      Serial.println("\nElecciones:");
      Serial.println("Arduino: " + String(val) + "  " +"P1: " + temporal);
      if (op == val) {
        Serial.println("Empatamos!!!\n");
      } else if (val == 0 and op == 1) {
        Serial.println("Has Ganado!!!\n");
        score[0]++;
      }
      else if  (val == 1 and op == 2) {
        Serial.println("Has Ganado!!!\n");
        score[0]++;
      }
      else if (val == 2 and op == 0) {
        Serial.println("Has Ganado!!!\n");
        score[0]++;
      }
      else {
        Serial.println("Te Gane!!!\n");
        score[1]++;
      }
      Serial.println("Puntaje: ");
      estado++;
      Serial.println("Arduino: " + String(score[1]) + "  " 
      + "P1: " + String(score[0]));
      break;

    case Reiniciar:
      op = 0;
      temporal = "";
      estado = 0;
      val = 0;
      Serial.println("\n \n");
      break;
  }
}
