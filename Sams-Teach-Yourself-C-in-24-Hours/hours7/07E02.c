/* Ex 2 page 101*/
#include <stdio.h>

int main()
{
    int i,j;
    for (i=0, j=1; i<8;i++,j++)
        printf("%d  +   %d  =   %d\n",i,j,i+j);
    for (i=0, j=1; i<8;i++,j++);
        printf("%d  +   %d  =   %d\n",i,j,i+j);
    return 0;
}
