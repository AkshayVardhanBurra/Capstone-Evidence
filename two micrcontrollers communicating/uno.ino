union uart_packet{
byte data[2];
int raw; // [0] LightVal, [1] TempVal
};




void setup(){
  Serial.begin(9600);
}
void loop() {
  if(Serial.available() > 0){
    char inputByte = Serial.read();
    if(inputByte == 'b'){
      sendPacket(0);
    }else{
      sendPacket(1);
    }
  }
}




void sendPacket(int sensor){
  union uart_packet packet;
  if(sensor == 0){
    packet.raw = analogRead(A0); // LightVal
  }else if(sensor == 1){
    packet.raw= analogRead(A1); // TempVal
  }
  Serial.write(packet.data[0]);
  Serial.write(packet.data[1]);


}

