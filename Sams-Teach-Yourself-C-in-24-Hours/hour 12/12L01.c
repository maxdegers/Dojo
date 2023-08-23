/*  12L01.c: Initializing an array */
#include <stdio.h>

int main()
{
    int i;
    int liste_int[10];
    
    for (i=0;i<10;i++){
        liste_int[i] = i+1;
        printf("liste_int[%d] is initialized with %d.\n", i, liste_int[i]);
    }
    return 0;
}
