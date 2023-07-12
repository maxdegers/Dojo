/*Ex 2 page 169*/
#include <stdio.h>
int main()
{
    float x,*ptr_x;
    x = 123.45;
    ptr_x = &x ;
    printf("Avant : %5.2f\n", *ptr_x);
    *ptr_x = 543.21;
    printf("Apres : %5.2f\n", *ptr_x);
    return 0;
}
