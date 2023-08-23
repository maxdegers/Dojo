/* 10L06.c: Breaking a infinite loop*/
#include <stdio.h>
#include "..\utils.h"
int main()
{
    int c;

    printf("Enter a character:\n(enter X to exit)\n");
    while (1){
        c = getchar();
        if (c == 'X'){
            break;
        }
    }
    printf("Break the infinite while loop. Bye!\n");
    end();
    return 0;
}
