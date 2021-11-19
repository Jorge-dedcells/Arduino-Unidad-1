//Variables
byte v_byte;
short v_short;
int v_int;

char v_char;
bool v_bool; //True - False

String var_string; //Cadenas de caracteres

float v_float;
double v_double;

void setup() {
  // put your setup code here, to run once:
  v_int = 0;

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Casanova Gomez Jorge Alberto");
  v_int++;
}
