int numero = 0;
int estimacion = 0;
int estado = 0;
String aux;//captura de caracteres que vamos a castear 
enum Estados {Imprimir_Op, Leer_Op, Calcular, Reiniciar};//arreglo de casos para el switch
int score [2] = {0, 0};//contar cantidad de aciertos 


void setup() {
  Serial.begin(9600);
  Serial.setTimeout(250);

}

void loop() {

  switch (estado) {
    case Imprimir_Op:
      Serial.println("Adivina un numero aleatorio");
      estado++;
      break;
    case Leer_Op:
      if (Serial.available() > 0) {
        aux = Serial.readString();
        estimacion = aux.toInt();//es lo que se esta guardando del casteo de string a int 
        numero = random(0, 20);
        estado++;
        Serial.println();//solo un salto de linea 
      }
      break;
    case Calcular:
      if (estimacion < numero) {
        Serial.println("Tu estimacion es muy baja"); // Hay ocho espacios delante de print.
        Serial.println("El numero que estaba pensando era " + String(numero));//si la estimacion es baja se hace la comparacion 
        score[1]++;
      } else if (estimacion > numero) {
        Serial.println("Tu estimacion es muy alta");
        Serial.println("El numero que estaba pensando era " + String(numero));
        score[1]++;
      } else if (estimacion == numero) {
        Serial.println("Buen trabajo has adivinado mi numero!");
        score[0]++;
      }
      estado++;
      Serial.println("Score: ");//cuantos aciertos tienes
      Serial.println("Yo:" + String(score[1]) + "  " + "Tu: " + String(score[0]));
      break;

    case Reiniciar:
      estimacion = 0;
      aux = "";
      estado = 0;
      numero = 0;
      Serial.println("\n \n");
      break;
  }
}
