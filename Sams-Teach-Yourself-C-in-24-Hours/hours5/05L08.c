/* 05L08.c: Using precision specifiers*/
#include <stdio.h>

int main()
{
    int int_num;
    double flt_num;

    int_num = 123;
    flt_num = 123.456789;
    printf("Default interger format:    %d\n", int_num);
    printf("With precision specifier:   %2.8d\n", int_num);
    printf("Default interger format:    %f\n", flt_num);
    printf("With precision specifier:   %10.2f\n", flt_num);
    return 0;
}