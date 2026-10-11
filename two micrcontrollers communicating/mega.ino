union uart_packet{
  byte data[2];
  short raw; // [0] LightVal, [1] TempVal


};




void setup() {
  Serial.begin(9600);   // USB Serial Monitor
  Serial1.begin(9600);  // UART from Uno
}


union uart_packet getPacket(){
   while(Serial1.available() < 2){
    //wait till buffer has 4 bytes
   }


    union uart_packet packet;


    for(int i = 0; i < 2; i++){
      packet.data[i] = Serial1.read();
    }


    return packet;
 
}


long getTemp(bool fahrenheight, int rawTempADC){


int temperature_Cx10, temperature_Fx10;
const long C_MultX10 = 5000; // long to avoid overflow in an int
const long F_MultX10 = 9000;
const long TenBits = 1023;
if (fahrenheight){
  temperature_Fx10 = (F_MultX10 * rawTempADC)/TenBits - 580;
  return temperature_Fx10;
}
else{
  temperature_Cx10 = (C_MultX10 * rawTempADC)/TenBits - 500;
  return temperature_Cx10;
}
}


bool fahrenheight = 1;


void loop() {
    if(Serial.available() > 0){
      char inputByte = Serial.read();
      Serial.println("GOT IN HERE");
      if(inputByte == 'b'){
        Serial.println("GOT BRIGHTNESS");
        Serial1.write(inputByte);
        union uart_packet packet = getPacket();
        Serial.println(packet.raw);
      }else if(inputByte == 't'){
        Serial.println("GOT TEMPERATURE");
        Serial1.write(inputByte);
        union uart_packet packet = getPacket();
        Serial.print(fahrenheight ? "Degrees F: " : "Degrees C:");
        Serial.println(getTemp(fahrenheight, packet.raw));
      }
      else if(inputByte == 'c'){
        fahrenheight = 0;
        Serial.println("In Celsius Mode");
      }else if(inputByte == 'f'){
        Serial.println("In Fahrenheight mode");
        fahrenheight = 1;
      }
    }
  }



