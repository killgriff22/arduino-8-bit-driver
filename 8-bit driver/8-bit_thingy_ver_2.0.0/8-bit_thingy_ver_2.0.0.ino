//pins that can be changed wil be commentexd upon
int bit_8 = 9;//this thru bit_1 may be changed to the appropriate pins
int bit_7 = 8;
int bit_6 = 7;
int bit_5 = 6;
int bit_4 = 5;
int bit_3 = 4;
int bit_2 = 3;
int bit_1 = 2;
int is_programming = 0;
int programming_pin = 10;//-
void setup() {
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
}
void writeBit(char Bit , char io){
  digitalWrite(Bit,io);
}
void writeByte(char io1 , char io2 , char io3 , char io4 , char io5 , char io6 , char io7 , char io8){
  writeBit(bit_1,io1);
  writeBit(bit_2,io2);
  writeBit(bit_3,io3);
  writeBit(bit_4,io4);
  writeBit(bit_5,io5);
  writeBit(bit_6,io6);
  writeBit(bit_7,io7);
  writeBit(bit_8,io8);
  }
void randomBit(char Bit){
  int rnnum = random(1,3);
  if(rnnum == 1){
    writeBit(Bit,LOW);
  } else if(rnnum == 2){
    writeBit(Bit,HIGH);
  };
}
void randomByteWrite(){
  int rnnum1 = random(1,3);
  if(rnnum1 == 1){
    writeBit(bit_1,LOW);
  } else if(rnnum1 == 2){
    writeBit(bit_1,HIGH);
  };
  int rnnum2 = random(1,3);
  if(rnnum2 == 1){
    writeBit(bit_2,LOW);
  } else if(rnnum2 == 2){
    writeBit(bit_2,HIGH);
  };
  int rnnum3 = random(1,3);
  if(rnnum3 == 1){
    writeBit(bit_3,LOW);
  } else if(rnnum3 == 2){
    writeBit(bit_3,HIGH);
  };
  int rnnum4 = random(1,3);
  if(rnnum4 == 1){
    writeBit(bit_4,LOW);
  } else if(rnnum4 == 2){
    writeBit(bit_4,HIGH);
  };
  int rnnum5 = random(1,3);
  if(rnnum5 == 1){
    writeBit(bit_5,LOW);
  } else if(rnnum5 == 2){
    writeBit(bit_5,HIGH);
  };
  int rnnum6 = random(1,3);
  if(rnnum6 == 1){
    writeBit(bit_6,LOW);
  } else if(rnnum6 == 2){
    writeBit(bit_6,HIGH);
  };
  int rnnum7 = random(1,3);
  if(rnnum7 == 1){
    writeBit(bit_7,LOW);
  } else if(rnnum7 == 2){
    writeBit(bit_7,HIGH);
  };
  int rnnum8 = random(1,3);
  if(rnnum8 == 1){
    writeBit(bit_8,LOW);
  } else if(rnnum8 == 2){
    writeBit(bit_8,HIGH);
  };
}
void Clear(){
  writeByte(LOW,LOW,LOW,LOW,LOW,LOW,LOW,LOW);
}
void testAll(){
   writeByte(HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH);
}
void loop() {
  randomByteWrite();
  delay(100);
}
