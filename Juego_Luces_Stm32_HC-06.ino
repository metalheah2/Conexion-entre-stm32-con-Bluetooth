int miArray[8] = {PA0, PA1, PA2, PA3, PA4, PA5, PA6, PA7};
char inputdata = 0;


void setup() {
  Serial1.begin(9600);
  Serial1.print("Menu Juego de luces \n");
  for (int i = 0; i <= 8; i++) {
    pinMode(miArray[i], OUTPUT);
  }
}

void loop() {
  if (Serial1.available() > 0) {
    inputdata = Serial1.read();
    if (inputdata == '1') {
      for (int i = 0; i <= 15; i++) {
        for (int i = 0; i <= 7; i++) {
          digitalWrite(miArray[i], HIGH);
        }
        delay(50);
        for (int i = 0; i <= 7; i++) {
          digitalWrite(miArray[i], LOW);
        }
        delay(50);
      }
    }
    else if (inputdata == '2') {
      for (int i = 0; i <= 8; i++) {
        for (int i = 0; i <= 7; i++) {
          digitalWrite(miArray[i], HIGH);
          delay(50);
        }
        for (int i = 0; i <= 7; i++) {
          digitalWrite(miArray[i], LOW);
          delay(50);
        }
      }
    }
    else if (inputdata == '3') {
      for (int i = 0; i <= 6; i++) {
        for (int i = 0; i <= 7; i++) {
          digitalWrite(miArray[i], HIGH);
          delay(50);
          digitalWrite(miArray[i], LOW);
        }
        for (int i = 6; i >= 0; i--) {
          digitalWrite(miArray[i], HIGH);
          delay(50);
          digitalWrite(miArray[i], LOW);
        }
      }
    }
    else if (inputdata == '4') {
      for (int i = 0; i <= 8; i++) {
        int i2 = 3;
        for (int i = 4; i <= 7; i++) {
          digitalWrite(miArray[i], HIGH);
          digitalWrite(miArray[i2], HIGH);
          delay(80);
          digitalWrite(miArray[i], LOW);
          digitalWrite(miArray[i2], LOW);
          i2 = i2 - 1;
        }
      }
    }
  }
}
