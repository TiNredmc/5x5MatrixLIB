#include <5x5MatrixLIB.h> 

MatrixLIB Disp(2,3,4); //SDCLK DATA LOAD

void setup()
{
Disp.begin();
delay(500);
Disp.setLampTest(true);
delay(100);
Disp.setLampTest(false);
delay(100);
Disp.setBrightness(100);
Disp.clear();
}

void loop()
{
Disp.writeStringScrolling("Testing...",120);
Disp.writeCharacter(0,'T');
Disp.writeCharacter(1,'L');
Disp.writeCharacter(2,'H');
Disp.writeCharacter(3,'X');
delay(200);
}
