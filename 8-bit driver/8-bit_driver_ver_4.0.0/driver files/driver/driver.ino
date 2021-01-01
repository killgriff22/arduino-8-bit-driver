void setupbinary(){
//pins that can be changed wil be commentexd upon
int bit_8 = 9;//this thru bit_1 may be changed to the appropriate pins
int bit_7 = 8;
int bit_6 = 7;
int bit_5 = 6;
int bit_4 = 5;
int bit_3 = 4;
int bit_2 = 3;
int bit_1 = 2;
int bit_1R = 13;//this thru bit_1 may be changed to the appropriate pins
int bit_2R = 14;
int bit_3R = 15;
int bit_4R = 16;
int bit_5R = 17;
int bit_6R = 18;
int bit_7R = 19;
int bit_8R = 20;
int R = 10;//pin for programming off
int G = 11;//pin for programming on
int bits[8] = {2,3,4,5,6,7,8,9};
int ip = 0;
int pp = 12;//programming pin (OPTIONAL)
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
}
void writeBit(char Bit , char io){
  digitalWrite(Bit,io);
}
void green(){
  digitalWrite(R,0);
  digitalWrite(G,1);
}
void red(){
  digitalWrite(R,1);
  digitalWrite(G,0); 
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
void randomBitWrite (char Bit){
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
void invertBits(){
  for(int i = 0;i<8;i++){
    if(digitalRead(bits[i]) == HIGH){
      digitalWrite(bits[i], LOW);
    }else if(digitalRead(bits[i]) == LOW){
      digitalWrite(bits[i], HIGH);
    };
  };
}
void Clear(){
  writeByte(LOW,LOW,LOW,LOW,LOW,LOW,LOW,LOW);
}
void testAll(){
   writeByte(HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH);
}