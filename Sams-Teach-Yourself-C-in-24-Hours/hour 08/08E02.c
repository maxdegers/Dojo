/* Ex 2 page 120*/
#include <stdio.h>

int main()
{
    int x,y;

    x = 0xEFFF;
    y = 0x1000;
    printf("return values of x: %d      %u\n",!x,!x);
    printf("return values of y: %d      %u\n",!y,!y);
    return 0;
}
