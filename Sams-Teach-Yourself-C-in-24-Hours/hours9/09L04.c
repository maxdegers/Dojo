/*09L04.c: Using sin(), cos(), and tan() fonction */
#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    x = 45.0;
    x *= 3.141593 / 180.0;
    printf("the sine of 45 is:     %f.\n", sin(x));
    printf("the cosine of 45 is:   %f.\n", cos(x));
    printf("the tangent of 45 is:  %f.\n", tan(x));
    return 0;
}
