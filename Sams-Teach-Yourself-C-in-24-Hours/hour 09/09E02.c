/*Ex 2 page 136*/
#include <stdio.h>

int main()
{
    char x[] = {'h','l','d'};
    int taille[] = {sizeof(short int),sizeof(long int),sizeof(long double)};
    for (int i = 0;i < 3; i++)
    {
        printf("size of %c :%d\n",x[i], taille[i]);
    }
    
    
    return 0;
}
