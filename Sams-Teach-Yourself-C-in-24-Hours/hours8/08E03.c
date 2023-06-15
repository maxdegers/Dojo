/* Ex 3 page 120*/
#include <stdio.h>

int main()
{
    int x,y,z;

    x = 123;
    y = 4;
    z = x << y;
    printf("x << y = %d\n",z);
    z = x >> y;
    printf("x >> y = %d\n",z);
    return 0;
}
