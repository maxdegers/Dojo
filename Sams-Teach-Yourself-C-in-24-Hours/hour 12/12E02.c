/* Ex 2 page 186*/
#include <stdio.h>

int main()
{
    char array_char[] = {'a','b','c','d','e','\0'};
    
    for (int i = 0; array_char[i] != '\0'; i++)
    {
        printf("%c ",array_char[i]);
    }
    return 0;
}
