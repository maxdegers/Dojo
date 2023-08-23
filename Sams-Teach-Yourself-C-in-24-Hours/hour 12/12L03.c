/* 12L03.c: Referencing an array with a pointer */
#include <stdio.h>

int main()
{
    int *ptr_int;
    int liste_int[10];
    int i;

    for (i=0; i<10; i++){
        liste_int[i] = i+1;
    }
    ptr_int = liste_int;
    printf("The start address of array: 0x%p\n",ptr_int);
    printf("The value of the first element: %d\n", *ptr_int);
    ptr_int= &liste_int[0];
    printf("The address of the fist element: 0x%p\n", ptr_int);
    printf("The value of the first element: %d\n", *ptr_int);
    return 0;
}
