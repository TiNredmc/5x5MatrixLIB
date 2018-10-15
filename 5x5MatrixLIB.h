#ifndef 5x5MatrixLIB_h
#define 5x5MatrixLIB_h

#include "Arduino.h"

class 5x5MatrixLIB {
  private:
    int m_clock, m_data, m_load;
  public:
    5x5MatrixLIB(int clock, int data, int load)
      : m_clock(clock)
      , m_data(data)
      , m_load(load) {}
    void begin();
    void clear();
    //void sendDigitData(int digit, char *digitData);
    void writeCharacter(int digit,char whatCharacter); //instead sendDigitdata
	void writeStringScrolling(String text, int speed);
	void setBrightness(int percent);
    void setPowerdownMode(boolean on);
    void setLampTest(boolean on);
	void bitbang(unsigned char code);
};
#endif