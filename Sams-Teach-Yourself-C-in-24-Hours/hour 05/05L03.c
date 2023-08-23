/* 05L03.c: Outputting a character with putc()*/
#include <stdio.h>

int main()
{
    int ch;

    ch = 65; /* Value of A*/
    printf("The character that has numeric value of 65 is:\n");
    putc(ch, stdout);
    return 0;
}