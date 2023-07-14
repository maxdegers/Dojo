/* Programe to sort caracter in order ascending or decending*/
/* from the file student.tad , read line by line , stdout the result*/
/*argument ::  --file student.tad --asc  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *storage[100];
void initialization()
{
    for (int i = 0; i < 100; i++)
    {
        storage[i] = NULL;
    }
}

void read_file(char *name)
{
    FILE *fp = fopen(name, "r");
    int storage_index;
    storage_index = 0;
    char line[30];
    char *string_reference;

    while (fgets(line, 30, fp) != NULL)
    {
        string_reference = malloc(30);
        strcpy(string_reference, line);
        storage[storage_index] = string_reference;
        storage_index += 1;
    }
    fclose(fp);

    for (int i = 0; i < storage_index; i++)
    {
        printf("%s", storage[i]);
    }
}

void sort_storage(char *order)
{
    int var = 0;
    int swap = 0;
    while (swap == 0)
    {
        swap = 1;
        // if (strcmp(order, "--asc") == 0)
        if (var == 0)
        {
            for (int i = 0; storage[i] != NULL; i++)
            {
                if (storage[i][0] > storage[i + 1][0])
                {
                    storage[100] = storage[i];
                    storage[i] = storage[i + 1];
                    storage[i + 1] = storage[100];
                    swap = 0;
                }
            }
        }
        else
        {
            for (int i = 0; storage[i] != NULL; i++)
            {
                if (storage[i][0] < storage[i + 1][0])
                {
                    storage[100] = storage[i];
                    storage[i] = storage[i + 1];
                    storage[i + 1] = storage[100];
                    swap = 0;
                }
            }
        }
    }
    for (int i = 0; storage[i] != NULL; i++)
    {
        printf("%s", storage[i]);
    }
}

    

void Deallocate_memory()
{
    for (int i = 0; storage[i] != NULL; i++)
    {
        free(storage[i]);
        storage[i] = NULL;
    }
}

int main(int argc, char **argv)
{
    // if (strcmp(argv[3], "--asc") != 0 && strcmp(argv[3], "--desc") != 0)
    // {
    //     printf("parameter mising\n");
    //     printf("usage: <--asc|--desc> \n");
    //     printf("Ex : %s --file student.tad --asc", argv[0]);
    //     return 1;
    // }
    // validate inputted arguments
    if (argc < 4)
    {
        printf("parameter mising\n");
        printf("Ex : --file student.tad --asc");
        return 2;
    }
    printf("main.begin\r\n");

    read_file(argv[2]);

    sort_storage(argv[3]);

    Deallocate_memory();

    printf("\rmain.end");
    return 0;
}
