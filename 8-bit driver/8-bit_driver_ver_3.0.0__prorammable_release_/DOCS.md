```***DOCS***```
writer_init()
initilises the borad as a witer device
reader_init()
initilises the board as a reader
 [COMING SOON] reader_writer_init()
 inits as a reader adn writer (rquires 12 pins)
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
 red()
 use a red led or rgb led
 sets the R pin high and the G pin low
 green()
 use green led or rgb led
 sets the G pin high and the R pin low
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
int bits[8] = {2,3,4,5,6,7,8,9};
int ip = 0;
int pp = 10;//programming pin (OPTIONAL)