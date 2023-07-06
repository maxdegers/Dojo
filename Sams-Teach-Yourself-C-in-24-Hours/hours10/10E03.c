/* Ex 3 page 153*/
#include <stdio.h>
#include "..\utils.h"

int main()
{
    char value;
    printf("Input a value from the liste A,B,C.\n");
    value = getchar();
    switch (value)
    {
    case 'A':
        printf("The numeric value is: %d\n",value);
        break;
    case 'B':
        printf("The numeric value is: %d\n",value);
        break;
    case 'C':
        printf("The numeric value is: %d\n",value);
        break;
    
    default:
        break;
    }
    end();
    return 0;
}
