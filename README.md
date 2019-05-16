# 5x5MatrixLIB
for Infineon/SIEMENS/OSRAM Intelligent Display (5x5) ROMless series ONLY

# Tested Platform with SCDV5542

```
- NodeMCU 
- Arduino AVR ATMEGA328
- STM32F103 Maple Mini (STM32Duino).
```

Supported Device in listed down below (X is LED's color,Y is Package)
=
```
SCD558X(A) series //Need to add > 4 digit (8 digit)
SCD5510X   series //Needs to add > 4 digit (10 digit)
SCDV554X   series
SCE574X    series
SCE578X    series
SCDQ554XY  Series
```

# NOTE 

It's not neccessary to connect the reset pin to your MCU. 

CREDITS
=
# Patrik Thalin ->http://www.thalin.se/2013/03/arduino-library-for-osram-scdq554xx.html
# LIB -> https://github.com/bmsleight/arduino-scdq-intelligent-display
# Thanks for the Fonts.
# Leandro A. F. Pereira ->https://gist.github.com/lpereira/1021747
# Thanks for the example code ,I use mostly function from this sketch file. 

Update 2018/10/15
=
I had uploade the latest renamed Library. Will test this newer version soon.

Update 2019/05/08
=
I'm working on the bitmap feature. And FakeGrayscale project will start soon.

Update 2019/05/09
=
Added the working bitmap drawing function. Can be used with normal variable or PROGMEM-ed variable.
