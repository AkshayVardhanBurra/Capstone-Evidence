#include "avr/io.h"
#include "util/delay.h"


void blinkNumber(byte h){
  int b = 300;
  switch(h){
    case 0:
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 1:
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 2:
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 3:
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 4:
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 5:
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 6:
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 7:
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 8:
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
    case 9:
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b*3);
      PORTB = (0 << PINB5);
      _delay_ms(b);
      PORTB = (1 << PINB5);
      _delay_ms(b);
      PORTB = (0 << PINB5);
      _delay_ms(b*3);
    break;
  }
}
void morse(int h){
  byte storage[100];
  byte index = 0;


  while (h > 0){
    byte lastDigit = (byte)(h % 10);
    storage[index] = lastDigit;
    index++;
    h/=10;
  }
  for(int i = index; i >= 0; i--){
    blinkNumber(storage[i]);
  }
 
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   DDRB |= 1 << 5;
}


int sensorPin = A0;


void loop() {
  // put your main code here, to run repeatedly:
  int rawADC = analogRead(sensorPin);
  float voltage = (float)rawADC * (5.0 / 1024.0);
  int temp = round((voltage - 0.5) * 100.0);
  morse(temp);
  delay(3000);
  Serial.println(rawADC);
  Serial.println(temp);


}
