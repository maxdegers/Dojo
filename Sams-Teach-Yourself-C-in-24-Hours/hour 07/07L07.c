/* 07L07.c: Demonstrating nested loops*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i=1; i<=3;i++){
        printf("the start of iteration %d of the outer loop.\n",i);
        for (j=1; j<=4;j++)
            printf("    Interation %d of the inner loop.\n",j);
        printf("The end of iteration %d of the outer loop.\n",i);     
    }
    return 0;
}
