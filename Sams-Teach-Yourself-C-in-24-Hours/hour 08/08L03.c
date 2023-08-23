/* 08L03.c: Using the logical OR operator*/
#include <stdio.h>
#include "..\utility.c"

int main()
{
    int num;

    printf("Enter a single digit that can be divided\nby both 2 and 3:\n");
    for (num = 1; (num%2 != 0) || (num%3 !=0); )
        num = getchar() - 48;
    printf("You got such a number: %d\n", num);
    end();
    return 0;
}
