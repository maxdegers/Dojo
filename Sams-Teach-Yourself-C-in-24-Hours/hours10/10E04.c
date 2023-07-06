/* Ex 4 page 153*/
#include <stdio.h>
#include "..\utils.h"

int main()
{
    char i,x;
    
    printf("To stop the loop input ('q')\n");
    while (x == 0)
    {
        i = getchar();
        if (i == 'q')
        {
            x = 1;
        }
        
    }
    printf("The loop break.Bye\n");
    end();
    return 0;
}
