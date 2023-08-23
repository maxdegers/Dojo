 /* Ex 3 page 102*/
#include <stdio.h>

int main()
{
    int c;

    printf("Enter a character:\n(enter k to exit)\n");
    for (c=' '; c != 'k'; ){
        c = getc(stdin);
        putchar(c);
    }
    printf("\nOut of the loop. Bye!\n");
    return 0;
}