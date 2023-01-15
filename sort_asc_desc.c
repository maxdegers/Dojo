/* fonction pour trie une liste de nombre*/////'del main.exe ; gcc .\sort_asc_desc.c -o main ; .\main.exe --asc  100 15 25 6 3 7'/////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STARTING_INDEX 2

void sort_a_d(int array[], int length, char *order)
{

    int var = 0;
    int swap = 0;
    while (swap == 0)
    {
        swap = 1;
        if (strcmp(order,"--asc" ) == 0)
        {
            for (int i = 0; i < length - 1; i++)
            {
                if (array[i] > array[i + 1])
                {
                    var = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = var;
                    swap = 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < length - 1; i++)
            {
                if (array[i] < array[i + 1])
                {
                    var = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = var;
                    swap = 0;
                }
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("array[%d]=%d \n", i, array[i]);
    }
}

int main(int argc, char **argv)
{

    if (argc < 2)
    {
        printf("parameter mising\n");
        printf("usage: %s <--asc|--desc> <int array>\n", argv[0]);
        printf("example: %s --asc 10 5 8 47 2 16\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "--asc") != 0 && strcmp(argv[1], "--desc") != 0)
    {
        printf("wrong parameter order\n");
        printf("usage: %s <--asc|--desc> <int array>\n", argv[0]);
        printf("example: %s --asc 10 5 8 47 2 16\n", argv[0]);
        return 2;
    }

    // char ** = [[m,a,i,n,\0],[5,\0],[12]]
    //            |
    int data[argc - STARTING_INDEX- 1];
    for (int i = 0; i < argc - STARTING_INDEX; i++)
    {
        int var = atoi(argv[i + STARTING_INDEX]);
        data[i] = var;
        // printf("index %d : %d \n", i, data[i]);
    }
    sort_a_d(data, argc - STARTING_INDEX, argv[1]);

    return 0;
}