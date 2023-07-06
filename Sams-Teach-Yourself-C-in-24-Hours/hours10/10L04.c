/* 10L04.c: Using the swich statement*/
#include <stdio.h>
#include "..\utils.h"
#include <string.h>
typedef enum {MONDAY, TUESDAY} day_Kinds;

int main(int argc, char const *argv[])
{
    char input[20];
    day_Kinds day;

    printf("Please enter a single digit for a day\n");
    printf("(within the rqange of 1 to 3):\n");
    gets(input);
    day = atoi(input);
    
    switch (day){
        case MONDAY:
            printf("Day 1\n");
            break;
        case TUESDAY:
            printf("Day 2\n");
            break;
        case 3:
            printf("Day 3\n");
            break;
        // default:
        //     printf("invalid\n");
    }
    end();
    return 0;
}
