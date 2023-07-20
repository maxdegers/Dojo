/* Ex2 page 203*/
#include <stdio.h>
#include <string.h>
#include "..\utils.h"
int main()
{
    char str[80];
    int count = 0;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count+= 1;
    }
    printf("%i\n",count);
    printf("%i\n",strlen(str));
    end();
    return 0;
}
