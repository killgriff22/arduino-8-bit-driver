void writer_init(){
pinMode(bit_8,OUTPUT);
pinMode(bit_7,OUTPUT);
pinMode(bit_6,OUTPUT);
pinMode(bit_5,OUTPUT);
pinMode(bit_4,OUTPUT);
pinMode(bit_3,OUTPUT);
pinMode(bit_2,OUTPUT);
pinMode(bit_1,OUTPUT);
pinMode(10,INPUT);
Serial.begin(9600);
randomSeed(analogRead(0));
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(pp,INPUT);
  };
