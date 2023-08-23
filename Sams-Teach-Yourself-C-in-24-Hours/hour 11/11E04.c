/* Ex 4 page 169*/
#include <stdio.h>
int main()
{
    int x, y, *ptr_x;
    x = 5;
    y = 6;
    x = x*y;
    ptr_x = &x;
    printf("resulte = %d\n", *ptr_x);
    return 0;
}
