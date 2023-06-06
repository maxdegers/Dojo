/* Ex 5 page 35*/
#include <stdio.h>


 int integers_multiply(int x, int y)
 {
    int result;
    result = x*y;
    return result;
 }


 int main()
 {
    int var = integers_multiply(3,5);

    printf("The 3 multiply by 5 is %d.\n", var);
    return 0;
 }
 