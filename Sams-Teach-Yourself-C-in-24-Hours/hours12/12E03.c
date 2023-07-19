/*Ex 3 page 186*/
#include <stdio.h>

int main()
{
    char list_char[][2] = {
        '1','a',
        '2','b',
        '3','c',
        '4','d',
        '5','e',
        '6','f'};
    printf("The size of the list_char[][] is %d bytes.\n",sizeof(list_char));
    printf("%s",list_char);
    return 0;
}
