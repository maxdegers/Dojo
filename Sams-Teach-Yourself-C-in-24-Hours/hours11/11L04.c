/* 11L04.c: Pointing to the same thing */
#include <stdio.h>

int main ()
{
    int x;
    int *ptr_1,*ptr_2, *ptr_3;

    x = 1234;
    printf("x: address=0x%p, content=%c\n", &x,x);
    ptr_1 = &x;
    printf("ptr_1: address=0x%p, content=0x%p\n", &ptr_1, ptr_1);
        printf("*ptr_1 => %d\n", *ptr_1);
    ptr_2 = &x;
    printf("ptr_2: address=0x%p, content=0x%p\n", &ptr_2, ptr_2);
        printf("*ptr_2 => %d\n", *ptr_2);
    ptr_3 = ptr_1;
    printf("ptr_3: address=0x%p, content=0x%p\n", &ptr_3, ptr_3);
        printf("*ptr_3 => %d\n", *ptr_3);
    return 0;
}