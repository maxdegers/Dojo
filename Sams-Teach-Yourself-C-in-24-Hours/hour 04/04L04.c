/* 04L04.c: Integer vs. floating-point divisions*/
#include <stdio.h>

main()
{
    int int_num1 , int_num2 , int_num3; /* Declare integer variavble*/
    float flt_num1 , flt_num2 , flt_num3; /* Declare floating-point variables*/

    int_num1 = 32/10; /* Both divisir and dividend are intergers */
    flt_num1 = 32/10;
    int_num2 = 32.0/10; /* the divisor is an interger*/
    flt_num2 = 32.0/10;
    int_num3 = 32/10.0; /* The dividend is an interger*/
    flt_num3 = 32/10.0;

    printf("The interger divis. of 32/10 is: %d\n", int_num1);
    printf("The floating-point divis. of 32/10 is: %f\n", flt_num1);
    printf("The interger divis. of 32.0/10 is: %d\n", int_num2);
    printf("The floating-point divis. of 32.0/10 is: %f\n", flt_num2);
    printf("The interger divis. of 32/10.0 is: %d\n", int_num3);
    printf("The floating-point divis. of 32/10.0 is: %f\n", flt_num3);
    return 0;
}