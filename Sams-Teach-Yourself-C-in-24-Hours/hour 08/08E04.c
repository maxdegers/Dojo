/* Ex 4 page 121*/
#include <stdio.h>

int main()
{
    int x,y,z;
    x = 0xFFF^0x8888;
    y = 0xABCD & 0x4567;
    z = 0xDCBA || 0x1234;
    printf("In Hex :\n    %x\n    %x\n    %x\n",x,y,z);
    return 0;
}
