#ifndef SCDV554X_h
#define SCDV554X_h

#include "Arduino.h"

class SCDV554X {
  private:
    int m_clock, m_data, m_load;
  public:
    SCDV554X(int clock, int data, int load)
      : m_clock(clock)
      , m_data(data)
      , m_load(load) {}
    void begin();
    void clear();
    //void sendDigitData(int digit, char *digitData);
    void writeCharacter(int digit,char whatCharacter); //instead sendDigitdata
	void setBrightness(int percent);
    void setPowerdownMode(boolean on);
    void setLampTest(boolean on);
	void bitbang(unsigned char code);
	
};
#endif