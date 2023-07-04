/*Ex 5 page 136*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    x = 30.0;
    x *= 3.141593 / 180.0;
    printf("sin(30) is: %f\n", sin(x));
    printf("tan(30) is: %f\n", tan(x));
    return 0;
}