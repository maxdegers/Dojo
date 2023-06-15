/* Ex 5 page 102*/
#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    while (i<=3)
    {
        
        printf("the start of iteration %d of the outer loop.\n",i);
        j =1;
        do{
            printf("    Interation %d of the inner loop.\n",j);
            j++;
        }while(j<=4);
        printf("The end of iteration %d of the outer loop.\n",i);
        i++;
    }
    return 0;
}