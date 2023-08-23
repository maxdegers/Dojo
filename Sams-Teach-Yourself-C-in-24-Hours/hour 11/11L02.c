/* 11L02.c: Declaring and assigning values to ponters */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c, *ptr_c;
    int x, *ptr_x;
    float y, *ptr_y;

    c = 'A';
    x = 7;
    y = 123.45;
    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    ptr_c = &c;
        printf("ptr_c: address=0x%p, content=0x%p\n", &ptr_c, ptr_c);
        printf("*ptr_c => %c\n", *ptr_c);
    ptr_x = &x;
        printf("ptr_x: address=0x%p, content=0x%p\n", &ptr_x, ptr_x);
        printf("*ptr_x => %d\n", *ptr_x);
    ptr_y = &y;
        printf("ptr_y: address=0x%p, content=0x%p\n", &ptr_y, ptr_y);
        printf("*ptr_y => %c\n", *ptr_y);
    return 0;
}
