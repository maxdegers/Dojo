/* Ex 3 page 169*/
#include <stdio.h>
int main()
{
    char ch,*ptr_ch;
    int i,*ptr_int;
    i = 66;
    ch = 'A';
    ptr_ch = &ch;
    printf("Avant : %c\n", *str_ch);
    ptr_int = &i;
    ptr_ch = ptr_int;
    printf("Apres : %d\n", *str_ch);
    return 0;
}
