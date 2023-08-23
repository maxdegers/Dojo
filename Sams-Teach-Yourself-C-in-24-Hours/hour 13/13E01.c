/* Ex 1 page 202*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "This is Exercise 1.";
    char str2[sizeof(str1)];
    strcpy(str2,str1);
    printf("%s\n%s",str1,str2);
    return 0;
}
