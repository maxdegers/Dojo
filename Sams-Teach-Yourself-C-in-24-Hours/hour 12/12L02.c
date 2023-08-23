/* 12L02.c: Total bytes of an array */
#include <stdio.h>

int main()
{
    int total_byte;
    int liste_int[10];

    total_byte = sizeof (int)*10;
    printf("The size of int is %d-byte long.\n", sizeof(int));
    printf("The array of 10 ints has total %d bytes.\n", total_byte);
    printf("The address of the first element: 0x%x\n",&liste_int[0]);
    printf("The address of the last element: 0x%x\n",&liste_int[9]);
    return 0;
}
