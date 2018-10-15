#include <5x5MatrixLIB.h> 

5x5MatrixLIB Disp(2,3,4); //SDCLK DATA LOAD

void setup(){
Disp.begin();
delay(500);
Disp.setLamptest(on);
delay(100);
Disp.setLamptest(off);
delay(100);
Disp.setBrightness(100);
Disp.clear();

}

void loop(){
Disp.writeStringScrolling("Testing...",);
Disp.writeCharacter(0,'T');
Disp.writeCharacter(1,'L');
Disp.writeCharacter(2,'H');
Disp.writeCharacter(3,'X');
delay(200);
}
