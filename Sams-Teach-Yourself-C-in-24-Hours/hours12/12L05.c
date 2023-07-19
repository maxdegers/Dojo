/* 12L05.c: stopping at the null character*/
#include <stdio.h>

int main()
{
    char array_char[15] = {'C',' ',
                           'i','s',' ',
                           'p','o','w','e','r',
                           'f','u','l','!','\0'};
    int i;
    for (i = 0; array_char[i] != '\0';i++){
        printf("%c",array_char[i]);
    }
    return 0;
}
