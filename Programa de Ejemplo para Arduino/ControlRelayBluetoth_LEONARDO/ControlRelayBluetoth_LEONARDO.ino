
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial1.begin(9600); //inicializa el puerto serial a 9600
  digitalWrite(2, HIGH); //apagamos los relays
  digitalWrite(3, HIGH); //conectados en 
}

void loop() {
  // read the sensor:
  if (Serial1.available() > 0) { // si... caracteres disponibles es mayor que cero... entonces
    int caracter = Serial1.read();  // leemos los caracteres disponibles, uno por uno  
    switch (caracter) {
      case 'A':
        digitalWrite(2, LOW); //ENCENDER RELAY 1
        break;
      case 'a':
        digitalWrite(2, HIGH);
        break;
      case 'B':
        digitalWrite(3, LOW);
        break;
      case 'b':
        digitalWrite(3, HIGH);
        break;
    }
  }
}
