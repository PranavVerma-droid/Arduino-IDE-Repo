//Libraries to use - LedControl

//DIN goes to D0 (NODEMCU)
//CS goes to D1 (NODEMCU)
//CLK goes to D2 (NODEMCU)

//Written by Pranav Verma
//https://g.dev/pranavverma

#include <LedControl.h>

int DIN = 16; // D0

int CS =  5;  // D
int CLK = 4;  // D2

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){

  lc.shutdown(0,false);     //The MAX72XX is in power-saving mode on startup

  lc.setIntensity(0,15);     // Set the brightness to maximum value

  lc.clearDisplay(0);        // and clear the display

}

void loop() {

    byte a[8] = {0xc3,0xc3,0xc3,0xff,0xff,0xc3,0xc3,0xc3};  // H
    byte b[8] = {0xff,0xff,0xc3,0xc3,0xff,0xff,0xc3,0xc3};     // A
    byte c[8] = {0xff,0xff,0xc3,0xc3,0xff,0xff,0xc0,0xc0};   // P
    byte x[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};    // -
    byte d[8] = {0xff,0xff,0xc3,0xc3,0xff,0xff,0xc0,0xc0}; // P
    byte e[8] = {0x81,0xc3,0x66,0x3c,0x18,0x18,0x18,0x18};    // Y
    
    
    byte f[8] = {0xfe,0x81,0x81,0xfe,0xfe,0x81,0x81,0xfe};    // B
    byte g[8] = {0xff,0xff,0x18,0x18,0x18,0x18,0xff,0xff};    // I
    byte h[8] = {0xff,0xff,0xc3,0xc3,0xff,0xf8,0xde,0xc7};    // R
    byte i[8] = {0xff,0xff,0x18,0x18,0x18,0x18,0x18,0x18};    // T
    byte j[8] = {0xc3,0xc3,0xc3,0xff,0xff,0xc3,0xc3,0xc3};    // H
    byte k[8] = {0xfe,0xfe,0xc3,0xc3,0xc3,0xc3,0xff,0xfc};    // D
    byte l[8] = {0xff,0xff,0xc3,0xc3,0xff,0xff,0xc3,0xc3};    // A
    byte m[8] = {0x81,0xc3,0x66,0x3c,0x18,0x18,0x18,0x18};    // Y
    byte n[8] = {0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x18};    // !
    byte o[8] = {0x00,0x66,0xff,0xff,0xff,0x7e,0x3c,0x18};    // heart

    byte p[8] = {0x38,0x44,0x88,0x91,0x88,0x44,0x38,0x00};    // pacman - 1
    byte q[8] = {0x38,0x44,0x88,0x92,0x88,0x44,0x38,0x00};    // pacman - 2
    byte r[8] = {0x38,0x44,0x88,0x94,0x88,0x44,0x38,0x00};    // pacman - 3
    byte s[8] = {0x38,0x44,0x82,0x9e,0x82,0x44,0x38,0x00};    // pacman - GULP!
    
    
    byte t[8] = {0x38,0x44,0x88,0x90,0x88,0x44,0x38,0x00};    // pacman - 4
    byte u[8] = {0x1c,0x22,0x44,0x48,0x44,0x22,0x1c,0x00};    // pacman - 5
    byte v[8] = {0x0e,0x11,0x22,0x24,0x22,0x11,0x0e,0x00};    // pacman - 6
    byte w[8] = {0x07,0x08,0x11,0x12,0x11,0x08,0x07,0x00};    // pacman - 7
    byte y[8] = {0x03,0x04,0x08,0x09,0x08,0x04,0x03,0x00};    // pacman - 8
    byte z[8] = {0x01,0x02,0x04,0x04,0x04,0x02,0x01,0x00};    // pacman - 9
    byte aa[8] = {0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00};    // pacman - 10
    byte ab[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};    // pacman - 11
    
    
   
    printByte(a);
    delay(800);
    printByte(b);
    delay(800);
    printByte(c);
    delay(800);
    printByte(x);
    delay(800);
    printByte(d);
    delay(800);
    printByte(e);
    delay(800);
    printByte(f);
    delay(800);
    printByte(g);
    delay(800);
    printByte(h);
    delay(800);
    printByte(i);
    delay(800);
    printByte(j);
    delay(800);
    printByte(k);
    delay(800);
    printByte(l);
    delay(800);
    printByte(m);
    delay(800);
    printByte(n);
    delay(800);
    printByte(o);
    delay(2000);
    printByte(p);
    delay(500);
    printByte(q);
    delay(500);
    printByte(r);
    delay(500);
    printByte(s);
    delay(500);
    printByte(t);
    delay(500);
    printByte(u);
    delay(500);
    printByte(v);
    delay(500);
    printByte(w);
    delay(500);
    printByte(y);
    delay(500);
    printByte(z);
    delay(500);
    printByte(aa);
    delay(500);
    printByte(ab);
    delay(500);
    


    

}

void printByte(byte character []){
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
