/* Ex 1 page 82*/
#include <stdio.h>

int main()
{
    int x, y;

    x = 1;
    y = 3;

    x += y;
    printf(" x += y // x = %d\n",x);

    x = 1;
    x +=-y;
    printf(" x +=-y // x = %d\n",x);

    x = 1;
    x -= y;
    printf(" x -= y // x = %d\n",x);

    x = 1;
    x -=-y;
    printf(" x -=-y // x = %d\n",x);

    x = 1;
    x *= y;
    printf(" x *= y // x = %d\n",x);

    x = 1;
    x *= -y;
    printf(" x *= -y // x = %d\n",x);
    
    return 0;
}