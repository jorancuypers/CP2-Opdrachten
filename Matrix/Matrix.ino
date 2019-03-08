/**
* Auteur: Stijn Boutsen
*
* Beschrijving: Dit programma laat de led matrix knipperen op het PXL uCbord.
*
*/

int IMAGE[8][8]={{0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0},
                 {0,0,0,0,0,0,0,0,}};


//Definiëren van de uitganspinnen
const int shiftClockPin = 3;  //SH
const int latchClockPin = 4;  //ST
const int serialInputPin = 9; //DS

//K5 K3 K6 R4 K8 R6 R7 K7
byte bericht1 = 0b11100000;
//R1 R2 K2 R8 K4 R3 R5 K1
byte bericht2 = 0b11011000;
boolean shiftLeftRight = false;

void setup() {
  //Instelen van de uitgangspinnen
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  displayData(bericht1);
  displayData(bericht2);
  
  delay(200);
}

void displayData(byte message) {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 7; i++) {
    digitalWrite(serialInputPin, bitRead(message, i));
    digitalWrite(shiftClockPin, HIGH);
    digitalWrite(shiftClockPin, LOW);
  }
  digitalWrite(latchClockPin, HIGH);
  digitalWrite(latchClockPin, LOW);

}
