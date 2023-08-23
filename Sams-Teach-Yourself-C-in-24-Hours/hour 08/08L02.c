/* 08L02.c: Using the logical AND operator (&&)*/
#include <stdio.h>

int main()
{
    int num;

    num = 0;
    printf(" The AND operator returns: %d\n", (num%2 ==0) && (num%3 ==0));

    num = 2;
    printf(" The AND operator returns: %d\n", (num%2 ==0) && (num%3 ==0));

    num = 3;
    printf(" The AND operator returns: %d\n", (num%2 ==0) && (num%3 ==0));

    num = 6;
    printf(" The AND operator returns: %d\n", (num%2 ==0) && (num%3 ==0));
    return 0;
}
