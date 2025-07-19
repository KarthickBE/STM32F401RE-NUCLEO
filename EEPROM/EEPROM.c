#include<pic.h>

void main()
{
TRISB=0x00;
EEADR=0x00;
EEDATA='A';
EEPGD=0;
WREN=1;
WR=1;
EECON2=0x55;
EECON2=0xAA;

while(WR==1);
WREN=0;

}