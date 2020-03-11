void setup() {
  Serial.begin(9600);
  digitalWrite(5, LOW);
  while (!Serial);
  // wait for serial port to connect
}

void loop() {
        char incomingByte;
        // send data only when you receive data:
        if (Serial.available() > 0) {
                incomingByte = Serial.read();
                Serial.print("Got: ");
                if(incomingByte == 49){
                  digitalWrite(13, HIGH);
                }

                if(incomingByte == 48){
                  digitalWrite(13, LOW);
                }
                Serial.println(incomingByte);
        }
        
}
