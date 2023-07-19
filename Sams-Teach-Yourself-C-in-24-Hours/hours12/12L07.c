/* 12L07.c: Initializing unsigned arrays*/
#include <stdio.h>

int main()
{
    char array_char[] = {'C',' ',
                           'i','s',' ',
                           'p','o','w','e','r',
                           'f','u','l','!','\0'};
    
    int list_int[][3] = {
            1,1,1,
            2,2,8,
            3,9,27,
            4,16,64,
            5,25,125,
            6,36,216,
            7,49,343};
    printf("The size of the array_ch[] is %d bytes.\n",sizeof(array_char));
    printf("The size of the list_int[][3] is %d bytes.\n",sizeof(list_int));
    return 0;
}
