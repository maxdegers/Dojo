/* 07L04.c: Conditional loop*/
#include <stdio.h>

int main()
{
    int c;

    printf("Enter a character:\n(enter x to exit)\n");
    for (c=' '; c != 'x'; ){
        c = getc(stdin);
        putchar(c);
    }
    printf("\nOut of the loop. Bye!\n");
    return 0;
}