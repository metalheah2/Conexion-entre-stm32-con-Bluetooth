const int pinout = PA0;
char datainput = 0;

void setup() {
  Serial1.begin(9600);
  Serial1.println("Conexion entre ");
  Serial1.println("Bluethoon con stm32");
  pinMode(pinout, OUTPUT);
}

void loop() {
  if (Serial1.available() > 0) {
    datainput = Serial1.read();
    if (datainput == '1') {
      digitalWrite(pinout, HIGH);
      Serial1.println("LED Encendido");
    }
    else if (datainput == '0') {
      digitalWrite(pinout, LOW);
      Serial1.println("LED Apagado");
    }
  }

}
