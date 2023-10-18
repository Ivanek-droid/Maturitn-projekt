int last = 8; 
int dataPin1 = 12;
int clockPin1 = 10;
int latchPin1 = 11;

int dataPin2 = 9;
int clockPin2 = 7;
int latchPin2 = 8;

int dataPin3 = 26;
int clockPin3 = 24;
int latchPin3 = 25;

int dataPin4 = 41;
int clockPin4 = 39;
int latchPin4 = 40;

int dataPin5 = 38;
int clockPin5 = 36;
int latchPin5 = 37;

int dataPin6 = 35;
int clockPin6 = 33;
int latchPin6 = 34;

int dataPin7 = 32;
int clockPin7 = 30;
int latchPin7 = 31;

int dataPin8 = 29;
int clockPin8 = 27;
int latchPin8 = 28;


int layers[] = {49,48,47,46,45,44,43,42};

byte nott = 0b00000000;


byte Nic[8] =
{
   0b00000000,
   0b00000000,
   0b00000000,
   0b00000000,
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000,
};
byte A[8] =
{
   0b00000000,
   0b00000000,
   0b00011000,
   0b00100100,
   0b00111100,
   0b00100100,
   0b00100100, 
   0b00000000,
};
byte B[8] =
{
   0b00000000,
   0b00000000,
   0b00111000,
   0b00100100,
   0b00111000,
   0b00100100,
   0b00111000, 
   0b00000000,
};
byte C[8] =
{
   0b00000000,
   0b00000000,
   0b00011100,
   0b00100000,
   0b00100000,
   0b00100000,
   0b00011100, 
   0b00000000,
};
byte D[8] =
{
   0b00000000,
   0b00000000,
   0b00111000,
   0b00100100,
   0b00100100,
   0b00100100,
   0b00111000, 
   0b00000000,
};

byte E[8] =
{
   0b00000000,
   0b00000000,
   0b00111100,
   0b00100000,
   0b00111000,
   0b00100000,
   0b00111100, 
   0b00000000,
};

byte F[8] =
{
   0b00000000,
   0b00000000,
   0b00111100,
   0b00100000,
   0b00111000,
   0b00100000,
   0b00100000, 
   0b00000000,
};

byte G[8] =
{
   0b00000000,
   0b00000000,
   0b00011100,
   0b00100000,
   0b00101100,
   0b00100100,
   0b00011100, 
   0b00000000,
};

byte H[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00100100,
   0b00111100,
   0b00100100,
   0b00100100, 
   0b00000000,
};

byte I[8] =
{
   0b00000000,
   0b00000000,
   0b00111000,
   0b00010000,
   0b00010000,
   0b00010000,
   0b00111000, 
   0b00000000,
};
byte J[8] =
{
   0b00000000,
   0b00000000,
   0b00011100,
   0b00000100,
   0b00000100,
   0b00100100,
   0b00100100, 
   0b00011000,
};

byte K[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00101000,
   0b00110000,
   0b00101000,
   0b00100100, 
   0b00000000,
};

byte L[8] =
{
   0b00000000,
   0b00000000,
   0b00100000,
   0b00100000,
   0b00100000,
   0b00100000,
   0b00111100, 
   0b00000000,
};

byte M[8] =
{
   0b00000000,
   0b00000000,
   0b01000100,
   0b01101100,
   0b01010100,
   0b01000100,
   0b01000100, 
   0b00000000,
};

byte N[8] =
{
   0b00000000,
   0b00000000,
   0b01000100,
   0b01100100,
   0b01010100,
   0b01001100,
   0b01000100, 
   0b00000000,
};

byte O[8] =
{
   0b00000000,
   0b00000000,
   0b00011000,
   0b00100100,
   0b00100100,
   0b00100100,
   0b00011000, 
   0b00000000,
};

byte P[8] =
{
   0b00000000,
   0b00000000,
   0b00111000,
   0b00100100,
   0b00111000,
   0b00100000,
   0b00100000, 
   0b00000000,
};

byte Q[8] =
{
   0b00000000,
   0b00000000,
   0b00011000,
   0b00100100,
   0b00100100,
   0b00110100,
   0b00011010, 
   0b00000000,
};

byte R[8] =
{
   0b00000000,
   0b00000000,
   0b00111000,
   0b00100100,
   0b00111000,
   0b00101000,
   0b00100100, 
   0b00000000,
};

byte S[8] =
{
   0b00000000,
   0b00000000,
   0b00011100,
   0b00100000,
   0b00011000,
   0b00000100,
   0b00111000, 
   0b00000000,
};
byte T[8] =
{
   0b00000000,
   0b00000000,
   0b01111100,
   0b00010000,
   0b00010000,
   0b00010000,
   0b00000000,
   0b00000000,
};

byte U[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00100100,
   0b00100100,
   0b00100100,
   0b00011000,
   0b00000000,
};

byte V[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00100100,
   0b00011000,
   0b00011000,
   0b00000000,
   0b00000000,
};

byte W[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00100100,
   0b00101010,
   0b00010100,
   0b00000000,
   0b00000000,
};

byte X[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00011000,
   0b00011000,
   0b00100100,
   0b00000000,
   0b00000000,
};

byte Y[8] =
{
   0b00000000,
   0b00000000,
   0b00100100,
   0b00011000,
   0b00011000,
   0b00011000,
   0b00000000,
   0b00000000,
};

byte Z[8] =
{
   0b00000000,
   0b00000000,
   0b00111100,
   0b00001000,
   0b00010000,
   0b00111100,
   0b00000000,
   0b00000000,
};
byte zero[8] =
{
   0b00000000,
   0b00011000,
   0b00100100,
   0b00100100,
   0b00100100,
   0b00011000,
   0b00000000,
   0b00000000,
};

byte one[8] =
{
   0b00000000,
   0b00010000,
   0b00110000,
   0b00010000,
   0b00010000,
   0b00111100,
   0b00000000,
   0b00000000,
};

byte two[8] =
{
   0b00000000,
   0b00111000,
   0b00001000,
   0b00010000,
   0b00100000,
   0b00111000,
   0b00000000,
   0b00000000,
};

byte three[8] =
{
   0b00000000,
   0b00111000,
   0b00001000,
   0b00011000,
   0b00001000,
   0b00111000,
   0b00000000,
   0b00000000,
};

byte four[8] =
{
   0b00000000,
   0b00010000,
   0b00110000,
   0b01010000,
   0b01111100,
   0b00010000,
   0b00000000,
   0b00000000,
};

byte five[8] =
{
   0b00000000,
   0b00111100,
   0b00100000,
   0b00111000,
   0b00001000,
   0b00110000,
   0b00000000,
   0b00000000,
};

byte six[8] =
{
   0b00000000,
   0b00010000,
   0b00100000,
   0b00111000,
   0b00100100,
   0b00011000,
   0b00000000,
   0b00000000,
};

byte seven[8] =
{
   0b00000000,
   0b00111100,
   0b00001000,
   0b00010000,
   0b00100000,
   0b00100000,
   0b00000000,
   0b00000000,
};

byte eight[8] =
{
   0b00000000,
   0b00011000,
   0b00100100,
   0b00011000,
   0b00100100,
   0b00011000,
   0b00000000,
   0b00000000,
};

byte nine[8] =
{
   0b00000000,
   0b00011000,
   0b00100100,
   0b00011100,
   0b00000100,
   0b00011000,
   0b00000000,
   0b00000000,
};

String slovo = "Dominik je curak";

char income = 0;
byte currentElement;
int layersNum = 8;

   ///////////////////////////////////////////////////////////////////////////////////////////setup///////////////////////////////////////////////////////////////////////////////////////////////////////
void setup(){
  Serial.begin(9600);
  
  pinMode(latchPin1, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  pinMode(dataPin1, OUTPUT);

  pinMode(latchPin2, OUTPUT);
  pinMode(clockPin2, OUTPUT);
  pinMode(dataPin2, OUTPUT);

  pinMode(latchPin3, OUTPUT);
  pinMode(clockPin3, OUTPUT);
  pinMode(dataPin3, OUTPUT);

  pinMode(latchPin4, OUTPUT);
  pinMode(clockPin4, OUTPUT);
  pinMode(dataPin4, OUTPUT);
  
  pinMode(latchPin5, OUTPUT);
  pinMode(clockPin5, OUTPUT);
  pinMode(dataPin5, OUTPUT);
  
  pinMode(latchPin6, OUTPUT);
  pinMode(clockPin6, OUTPUT);
  pinMode(dataPin6, OUTPUT);
  
  pinMode(latchPin7, OUTPUT);
  pinMode(clockPin7, OUTPUT);
  pinMode(dataPin7, OUTPUT);
  
  pinMode(latchPin8, OUTPUT);
  pinMode(clockPin8, OUTPUT);
  pinMode(dataPin8, OUTPUT);

  for(int i  = 0;i <=layersNum;i++){
    pinMode(layers[i],OUTPUT);
    delay(5);
  }

  for(int i  = 0;i <=layersNum;i++){
    digitalWrite(layers[i],1);
    delay(5);
  }
  delay(1000);
  none();
  Serial.println("Led cube startuje");
}
   ///////////////////////////////////////////////////////////////////////////////////////////loop///////////////////////////////////////////////////////////////////////////////////////////////////////
void loop(){
  
ascii();
abc();
full();
none();

 ///////////////////////////////////////////////////////////////////////////////////////////Seriova komunikace///////////////////////////////////////////////////////////////////////////////////////////////////////

   ///////////////////////////////////////////////////////////////////////////////////////////abc - vypsani vsech pisnem z abecedy rezim///////////////////////////////////////////////////////////////////////////////////////////////////////
void abc(){


for(int j = 0;j<=36;j++){
 for (int k = 0; k <= 7; k++) {
   for (int l = 0; l <= 100; l++) {
     for (int i = 0; i <= 7; i++) {



   switch(j){
    case 1:
    currentElement = A[i];
    break;
    case 2:
    currentElement = B[i];
    break;
    case 3:
    currentElement = C[i];
    break;
    case 4:
    currentElement = D[i];
    break;
    case 5:
    currentElement = E[i];
    break;
    case 6:
    currentElement = F[i];
    break;
    case 7:
    currentElement = G[i];
    break;
    case 8:
    currentElement = H[i];
    break;
    case 9:
    currentElement = I[i];
    break;
    case 10:
    currentElement = J[i];
    break;
    case 11:
    currentElement = K[i];
    break;
    case 12:
    currentElement = L[i];
    break;
    case 13:
    currentElement = M[i];
    break;
    case 14:
    currentElement = N[i];
    break;
    case 15:
    currentElement = O[i];
    break;
    case 16:
    currentElement = P[i];
    break;
    case 17:
    currentElement = Q[i];
    break;
    case 18:
    currentElement = R[i];
    break;
    case 19:
    currentElement = S[i];
    break;
    case 20:
    currentElement = T[i];
    break;
    case 21:
    currentElement = U[i];
    break;
    case 22:
    currentElement = V[i];
    break;
    case 23:
    currentElement = W[i];
    break;
    case 24:
    currentElement = X[i];
    break;
    case 25:
    currentElement = Y[i];
    break;
    case 26:
    currentElement = Z[i];
    break;
    case 27:
    currentElement = zero[i];
    break;
    case 28:
    currentElement = one[i];
    break;
    case 29:
    currentElement = two[i];
    break;
    case 30:
    currentElement = three[i];
    break;
    case 31:
    currentElement = four[i];
    break;
    case 32:
    currentElement = five[i];
    break;
    case 33:
    currentElement = six[i];
    break;
    case 34:
    currentElement = seven[i];
    break;
    case 35:
    currentElement = eight[i];
    break;
    case 36:
    currentElement = nine[i];
    break;
  }
  switch(k){
    case 0:
     
    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,currentElement);
    digitalWrite(latchPin1,1);
    
     digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,nott);
    digitalWrite(latchPin1,1);
    break;
    case 1:
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,currentElement);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,nott);
    digitalWrite(latchPin2,1);
    break;
    case 2:
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,currentElement);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,nott);
    digitalWrite(latchPin3,1);
    break;
    case 3:
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,currentElement);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,nott);
    digitalWrite(latchPin4,1);
    break;
    case 4:
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,currentElement);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,nott);
    digitalWrite(latchPin5,1);
    break;
    case 5:
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,currentElement);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,nott);
    digitalWrite(latchPin6,1);
    break;
    case 6:
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,currentElement);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,nott);
    digitalWrite(latchPin7,1);
    break;
    case 7:
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,currentElement);
    digitalWrite(latchPin8,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,nott);
    digitalWrite(latchPin8,1);
    break;

  }
    
    switch(i){
    case 0:
    digitalWrite(layers[0],0);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 1:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 2:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 3:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 4:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 5:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 6:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],1);
    break;
    case 7:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],0);
    break;

}
    //delay(5);
  }
} 
}
}
}
   






///////////////////////////////////////////////////////////////////////////////////////////letters///////////////////////////////////////////////////////////////////////////////////////////////////////
void letters(){




  
}

///////////////////////////////////////////////////////////////////////////////////////////full - cela kostka zapnuta rezim///////////////////////////////////////////////////////////////////////////////////////////////////////
void full(){
      
    digitalWrite(layers[0],0);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],0);

    byte myByte = 0b11111111;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,myByte);
    digitalWrite(latchPin1,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,myByte);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,myByte);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,myByte);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,myByte);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,myByte);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,myByte);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,myByte);
    digitalWrite(latchPin8,1);
    }
   ///////////////////////////////////////////////////////////////////////////////////////////none - cela kostka vypnuta rezim///////////////////////////////////////////////////////////////////////////////////////////////////////

    void none(){

    digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);

    byte none = 0b00000000;

    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,none);
    digitalWrite(latchPin1,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,none);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,none);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,none);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,none);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,none);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,none);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,none);
    digitalWrite(latchPin8,1);
    }
       ///////////////////////////////////////////////////////////////////////////////////////0-9///////////////////////////////////////////////////////////////////////////////////////////////////
   
void ascii(){

/*int pocet_pismen = 0;

for (int i = 0; i < slovo.length(); i++) {
  if (isAlpha(slovo.charAt(i))) { 
    pocet_pismen++;
  }
}*/
for (int i = 0; i < slovo.length(); i++) {
  char znak = slovo.charAt(i);

}

for(int j = 0;j< slovo.length();j++){
    char znak = slovo.charAt(j);
  for (int k = 0; k <= 7; k++) {
    for (int l = 0; l <= 100; l++) {
      for (int i = 0; i <= 7; i++) {

  

   switch(znak){
    case 'a':
    currentElement = A[i];
    break;
    case 'b':
    currentElement = B[i];
    break;
    case 'c':
    currentElement = C[i];
    break;
    case 'd':
    currentElement = D[i];
    break;
    case 'e':
    currentElement = E[i];
    break;
    case 'f':
    currentElement = F[i];
    break;
    case 'g':
    currentElement = G[i];
    break;
    case 'h':
    currentElement = H[i];
    break;
    case 'i':
    currentElement = I[i];
    break;
    case 'j':
    currentElement = J[i];
    break;
    case 'k':
    currentElement = K[i];
    break;
    case 'l':
    currentElement = L[i];
    break;
    case 'm':
    currentElement = M[i];
    break;
    case 'n':
    currentElement = N[i];
    break;
    case 'o':
    currentElement = O[i];
    break;
    case 'p':
    currentElement = P[i];
    break;
    case 'q':
    currentElement = Q[i];
    break;
    case 'r':
    currentElement = R[i];
    break;
    case 's':
    currentElement = S[i];
    break;
    case 't':
    currentElement = T[i];
    break;
    case 'u':
    currentElement = U[i];
    break;
    case 'v':
    currentElement = V[i];
    break;
    case 'w':
    currentElement = W[i];
    break;
    case 'x':
    currentElement = X[i];
    break;
    case 'y':
    currentElement = Y[i];
    break;
    case 'z':
    currentElement = Z[i];
    break;
    default:
    currentElement = Nic[i];
    break;
  }
  switch(k){
    case 0:
     
    digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,currentElement);
    digitalWrite(latchPin1,1);
    
     digitalWrite(latchPin1,0);
    shiftOut(dataPin1,clockPin1,LSBFIRST,nott);
    digitalWrite(latchPin1,1);
    break;
    case 1:
    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,currentElement);
    digitalWrite(latchPin2,1);

    digitalWrite(latchPin2,0);
    shiftOut(dataPin2,clockPin2,LSBFIRST,nott);
    digitalWrite(latchPin2,1);
    break;
    case 2:
    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,currentElement);
    digitalWrite(latchPin3,1);

    digitalWrite(latchPin3,0);
    shiftOut(dataPin3,clockPin3,LSBFIRST,nott);
    digitalWrite(latchPin3,1);
    break;
    case 3:
    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,currentElement);
    digitalWrite(latchPin4,1);

    digitalWrite(latchPin4,0);
    shiftOut(dataPin4,clockPin4,LSBFIRST,nott);
    digitalWrite(latchPin4,1);
    break;
    case 4:
    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,currentElement);
    digitalWrite(latchPin5,1);

    digitalWrite(latchPin5,0);
    shiftOut(dataPin5,clockPin5,LSBFIRST,nott);
    digitalWrite(latchPin5,1);
    break;
    case 5:
    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,currentElement);
    digitalWrite(latchPin6,1);

    digitalWrite(latchPin6,0);
    shiftOut(dataPin6,clockPin6,LSBFIRST,nott);
    digitalWrite(latchPin6,1);
    break;
    case 6:
    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,currentElement);
    digitalWrite(latchPin7,1);

    digitalWrite(latchPin7,0);
    shiftOut(dataPin7,clockPin7,LSBFIRST,nott);
    digitalWrite(latchPin7,1);
    break;
    case 7:
    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,currentElement);
    digitalWrite(latchPin8,1);

    digitalWrite(latchPin8,0);
    shiftOut(dataPin8,clockPin8,LSBFIRST,nott);
    digitalWrite(latchPin8,1);
    break;

  }
    
    switch(i){
    case 0:
digitalWrite(layers[0],0);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 1:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],0);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 2:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],0);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 3:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],0);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 4:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],0);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 5:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],0);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],1);
    break;
    case 6:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],0);
    digitalWrite(layers[7],1);
    break;
    case 7:
digitalWrite(layers[0],1);
    digitalWrite(layers[1],1);
    digitalWrite(layers[2],1);
    digitalWrite(layers[3],1);
    digitalWrite(layers[4],1);
    digitalWrite(layers[5],1);
    digitalWrite(layers[6],1);
    digitalWrite(layers[7],0);
    break;

}
    //delay(5);
  }
} 
}
}
}
