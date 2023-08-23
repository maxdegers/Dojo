/* 11L03.c: Changing values via pointers*/
#include <stdio.h>

int main (){
    char c, *ptr_c;
    c ='A';
    printf("c: address=0x%p, content=%c\n", &c,c);
    ptr_c = &c;
        printf("ptr_c: address=0x%p, content=0x%p\n", &ptr_c, ptr_c);
        printf("*ptr_c => %c\n", *ptr_c);
    *ptr_c = 'B';
        printf("ptr_c: address=0x%p, content=0x%p\n", &ptr_c, ptr_c);
        printf("*ptr_c => %c\n", *ptr_c);
    printf("c: address=0x%p, content=%c\n", &c,c);
    return 0;
}