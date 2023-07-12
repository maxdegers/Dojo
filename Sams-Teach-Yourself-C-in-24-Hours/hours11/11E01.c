/* Ex 1 page 169*/
#include <stdio.h>

int main()
{
    int x,y,z ;
    int *ptr_x,*ptr_y,*ptr_z;
    x = 512;
    y = 1024;
    z = 2048;
    ptr_x = &x;
    printf("ptr_x: address=0x%p, content=0x%p\n", &ptr_x, ptr_x);
        printf("*ptr_x => %d\n", *ptr_x);
    ptr_y = &y;
    printf("ptr_y: address=0x%p, content=0x%p\n", &ptr_y, ptr_y);
        printf("*ptr_y => %d\n", *ptr_y);
    ptr_z = &z;
    printf("ptr_z: address=0x%p, content=0x%p\n", &ptr_z, ptr_z);
        printf("*ptr_z => %d\n", *ptr_z);
    return 0;
}
