#include "Arduino.h"
#include "5x5MatrixLIB.h"
#include "font5x5.h"
#if (defined(__AVR__))
#include <avr\pgmspace.h>
#else
#include <pgmspace.h>
#endif
#include <string.h>

void MatrixLIB::bitbang(unsigned char code) //for loading the data to the display 
    {
      digitalWrite(m_load, LOW);
      for (int i = 0; i < 8; i++) {
        digitalWrite(m_clock, LOW);
        digitalWrite(m_data, code & 0x01);
        digitalWrite(m_clock, HIGH);
        code >>= 1;
      }
      digitalWrite(m_load, HIGH);
    }
	
void MatrixLIB::clear()//clear the display 
{
  bitbang(0xc0);
}

void MatrixLIB::setBrightness(int percent)//set the display brightness 
{
  bitbang(0xf0 + map(percent, 0, 100, 6, 0));
}

void MatrixLIB::setPowerdownMode(boolean on)//powerdown the display 
{
  if (on)
    bitbang(0xff);
  else
    setBrightness(100);
}

void MatrixLIB::setLampTest(boolean on)//test all LED on the display 
{
  if (on)
    bitbang(0xf8);
  else
    clear();
}

void MatrixLIB::begin()//init the display and clear previous data.
{
  pinMode(m_clock, OUTPUT);
  pinMode(m_data, OUTPUT);
  pinMode(m_load, OUTPUT);
  clear();
}

void MatrixLIB::writeCharacter(int digit,char whatCharacter)//set specific character individually
{
if (digit < 0 || digit > 3)
    return;
  bitbang(0xa0 + digit);  
  for (int row = 0; row < 5; row++) {
    bitbang(pgm_read_byte(&Font5x5[((whatCharacter - 0x20) * 5) + row]));
  }
}

void MatrixLIB::writeStringScrolling(String text, int speed)//Scroll text with speed (Delay is for how long to wait the characters to move to next digit)
{
  text = "    "+text+"    ";
  int l = text.length()+1;
  byte b[l];
  text.getBytes(b,l);
  for(int i = 0; i<l-4; i++){
    writeCharacter(3,b[0+i]);
	writeCharacter(2,b[1+i]);
    writeCharacter(1,b[2+i]);
    writeCharacter(0,b[3+i]);
    delay(speed);
  }
  clear();
}
