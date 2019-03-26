byte IMAGE[8][8]={{0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0}};


byte A[8][8]=    {{0,0,0,0,0,0,0,0},
                 {0,0,0,1,1,0,0,0},
                 {0,0,1,0,0,1,0,0},
                 {0,0,1,0,0,1,0,0},
                 {0,1,0,0,0,0,1,0},
                 {0,1,1,1,1,1,1,0},
                 {0,1,0,0,0,0,1,0},
                 {0,1,0,0,0,0,1,0}};

byte B[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,1,1,1,0,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,1,1,1,0,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,1,1,1,0,0,0}};

byte C[8][8]={{0,0,0,0,0,0,0,0},
              {0,0,0,1,1,1,0,0},
              {0,0,1,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,0,1,0,0,0,0,0},
              {0,0,0,1,1,1,0,0}};


byte D[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,1,1,1,0,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,0,1,0},
              {0,1,0,0,0,0,1,0},
              {0,1,0,0,0,0,1,0},
              {0,1,0,0,0,1,0,0},
              {0,1,1,1,1,0,0,0}};


byte E[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,1,1,1,1,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,1,1,1,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,1,1,1,1,0,0}};


byte F[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,1,1,1,1,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,1,1,1,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,0,0,0,0,0}};

byte G[8][8]={{0,0,0,0,0,0,0,0},
              {0,0,1,1,1,1,0,0},
              {0,1,0,0,0,0,1,0},
              {0,1,0,0,0,0,0,0},
              {0,1,0,1,1,1,1,0},
              {0,1,0,0,0,0,1,0},
              {0,1,0,0,0,1,0,0},
              {0,0,1,1,1,0,0,0}};

byte H[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,1,1,1,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,0,1,0,0}};
              
byte I[8][8]={{0,0,0,0,0,0,0,0},
              {0,0,1,1,1,0,0,0},
              {0,0,0,1,0,0,0,0},
              {0,0,0,1,0,0,0,0},
              {0,0,0,1,0,0,0,0},
              {0,0,0,1,0,0,0,0},
              {0,0,0,1,0,0,0,0},
              {0,0,1,1,1,0,0,0}};
              
byte J[8][8]={{0,0,0,0,0,0,0,0},
              {0,0,1,1,1,1,0,0},
              {0,0,0,0,0,1,0,0},
              {0,0,0,0,0,1,0,0},
              {0,0,0,0,0,1,0,0},
              {0,0,0,0,0,1,0,0},
              {0,0,1,0,0,1,0,0},
              {0,0,0,1,1,0,0,0}};
              
byte K[8][8]={{0,0,0,0,0,0,0,0},
              {0,1,0,0,0,1,0,0},
              {0,1,0,0,1,0,0,0},
              {0,1,0,1,0,0,0,0},
              {0,1,1,0,0,0,0,0},
              {0,1,0,1,0,0,0,0},
              {0,1,0,0,1,0,0,0},
              {0,1,0,0,0,1,0,0}};
              

//Definiëren van de uitganspinnen
const int shiftClockPin = 3;  //SH
const int latchClockPin = 4;  //ST
const int serialInputPin = 9; //DS

//R1 - 1
//R2 - 2
int K2 = 3;
//R8 - 4
int K4 = 5;
//R3 - 6
//R5 - 7
int K1 = 8;
int K5 = 9;
int K3 = 10;
int K6 = 11;
//R4 - 12
int K8 = 13;
//R6 - 14
//R7 - 15
int K7 = 16;
int KS = 0;
word bericht1  = 0b1101011000010110;
int Kol = 0;
unsigned long previousMillis = 0;  
long interval = 500; 
boolean shiftLeftRight = false;

void setup() {
  Serial.begin(115200);
  //Instelen van de uitgangspinnen
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);
}

void loop(){
 static int i = 0;
 unsigned long currentMillis = millis();
 if (currentMillis - previousMillis >= interval) {
   Serial.println(i);
    i = (i+1)%11;
    previousMillis = currentMillis;

    switch(i){
      case(0): Acpy(A); break;
      case(1): Acpy(B); break;
      case(2): Acpy(C); break;
      case(3): Acpy(D); break;
      case(4): Acpy(E); break;
      case(5): Acpy(F); break;
      case(6): Acpy(G); break;
      case(7): Acpy(H); break;
      case(8): Acpy(I); break;
      case(9): Acpy(J); break;
      case(10): Acpy(K); break;
      }
 }
 KS= 0;
 bericht1  = 0b1101011000010110;
 Translate();
 displayData(bericht1);
 delay(1);
}

void displayData(word message) 
{
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 15; i++) 
  {
    digitalWrite(serialInputPin, bitRead(message, i));
    digitalWrite(shiftClockPin, HIGH);
    digitalWrite(shiftClockPin, LOW);
  }
  digitalWrite(latchClockPin, HIGH);
  digitalWrite(latchClockPin, LOW);
}



void Translate(){

    switch(Kol){
      case (0): KS=K1;break;
      case (1): KS=K2;break;
      case (2): KS=K3;break;
      case (3): KS=K4;break;
      case (4): KS=K5;break;
      case (5): KS=K6;break;
      case (6): KS=K7;break;
      case (7): KS=K8;break;
      }
  if (IMAGE[0][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(1, 0, bericht1);
    }
  if (IMAGE[1][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(2, 0, bericht1);
    }
  if (IMAGE[2][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(6, 0, bericht1);
    }
  if (IMAGE[3][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(12, 0, bericht1);
    }
  if (IMAGE[4][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(7, 0, bericht1);
    }
  if (IMAGE[5][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(14, 0, bericht1);
    }
  if (IMAGE[6][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(15, 0, bericht1);
    }
  if (IMAGE[7][Kol] == 1){
    bericht1 = setBits(KS, 1, bericht1);
    bericht1 = setBits(4, 0, bericht1);
    }
    Kol++;
  if (Kol > 8) {
    Kol=0;}
    
}




  
short int setBits(int welkeBit,int waardeBit,word X){
  if (waardeBit ==1){
  return(X | (1<<(16-welkeBit)));
  }
  else{
    return (X ^ (1<<(16-welkeBit)));
    }
}

void Acpy(byte src[8][8]){
  for (byte i = 0; i<8; i++)
  {
    for (byte j = 0; j < 8; j++)
    {
      IMAGE[i][j] = src[i][j];
    }
  }
    }
  
