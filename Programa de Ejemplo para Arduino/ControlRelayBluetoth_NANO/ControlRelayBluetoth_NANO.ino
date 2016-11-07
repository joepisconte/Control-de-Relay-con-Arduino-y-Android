void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600); //inicializa el puerto serial a 9600
  digitalWrite(3, HIGH); //apagamos los relays
  digitalWrite(4, HIGH); //conectados en 
  

}

void loop() {
  if (Serial.available() > 0) { // si... caracteres disponibles es mayor que cero... entonces
    int caracter = Serial.read();  // leemos los caracteres disponibles, uno por uno  
    switch (caracter) {
      case 'A':
        digitalWrite(3, LOW); //ENCENDER RELAY 1
        break;
      case 'a':
        digitalWrite(3, HIGH);
        break;
      case 'B':
        digitalWrite(4, LOW);
        break;
      case 'b':
        digitalWrite(4, HIGH);
        break;
    }
  }
}
