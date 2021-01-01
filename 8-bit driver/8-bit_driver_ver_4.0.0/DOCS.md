 ```***DOCS***```
 writer_init()
 initilises the borad as a witer device
 reader_init()
 initilises the board as a reader
 writeBit(bit_x,1/0/HIGH/LOW)
 writes the bit specified high or low
 writeByte(1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW,1/0/HIGH/LOW)
 randomByteWrite()
 writes a random byte to the output pins
 randomBitWrite()
 writes a random bit to a specified bit
 invertBits()
 really? do you really need more info?
 Clear()
 clears the output and sets all pins low
 testAll()
 test the leds/pinsby setting all output pins to high
 Re() formerly red()
 use a red led or rgb led
 sets the R pin high
 Gr() formerly green()
 use green led or rgb led
 sets the G pin high
 Blu()
 use blue led or rgb led
 sets the B pin high
 led_clear()
 sets all led pins low
```***PIUNS***``` (literally copied from the source code lol)
int bit_8 = 9;//this thru bit_1 may be changed to the appropriate pins
int bit_7 = 8;
int bit_6 = 7;
int bit_5 = 6;
int bit_4 = 5;
int bit_3 = 4;
int bit_2 = 3;
int bit_1 = 2;
int R = 10;
int G = 11;
int B = 13;
int bits[8] = {2,3,4,5,6,7,8,9};
int ip = 0;
int pp = 10;//programming pin (OPTIONAL)
```COMMING SOON```
[VER 4.1.0] EEPROM commands
[VER 5.0.0] [PUSHBACKS VIABLE] support for using the reader_witer_init() function to init as both
[NO DATE YET] [POSSIBLE TO BE CANCELED] WriteBytes(2-8 bytes packed into 8-bit codes)