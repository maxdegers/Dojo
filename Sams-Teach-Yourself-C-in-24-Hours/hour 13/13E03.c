/* Ex3 page 203*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "ABCDEFGH";
    int i ,delt = 'a'-'A';
    i =0;
    while (str[i])
    {
        if ((str[i]>='A') && (str[i]<='Z'))
        {
            str[i]+= delt; 
        }
         i++;
    }
    puts(str);
    return 0;
}
