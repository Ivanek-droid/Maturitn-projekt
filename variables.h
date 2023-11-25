#ifndef __variables_h__
#define __variables_h__

int layeralldelaytime = 500;












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

byte beer[8] =
{
   0b10101000,
   0b11111100,
   0b11111110,
   0b11111101,
   0b11111101,
   0b11111110,
   0b11111100,
   0b00000000,
};
String slovo = "";
char income = 0;
byte currentElement;
int layersNum = 8;



int pins[] = {dataPin1, dataPin2, dataPin3, dataPin4, dataPin5, dataPin6, dataPin7, dataPin8, latchPin1, latchPin2, latchPin3, latchPin4, latchPin5, latchPin6, latchPin7, latchPin8, clockPin1, clockPin2, clockPin3, clockPin4, clockPin5, clockPin6, clockPin7, clockPin8};




#endif