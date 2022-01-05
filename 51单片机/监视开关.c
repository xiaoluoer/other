#include<reg51.h>
void delay (unsigned int d)
{
    unsigned char i,a,sel;
    sel=0xfe;//11111110
    while(1)
    {
        if(P3 == 0xfe)
        {
            for (i=0;i<8;i++)
            {
                P1=sel; delay(50000);
                a=sel<<1;sel=a|0x01
            }
        }
    }
}