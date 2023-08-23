/* 08L04.c: Using logical negation operator*/
#include <stdio.h>

int main()
{
    int num = 7;
    printf("given num = 7\n");
    printf("!(num < 7)   returns: %d\n", !(num < 7));
    printf("!(num > 7)   returns: %d\n", !(num > 7));
    printf("!(num == 7)  returns: %d\n", !(num == 7));


    return 0;
}
