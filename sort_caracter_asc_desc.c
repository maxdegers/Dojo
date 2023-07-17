/* Programe to sort caracter in order ascending or decending*/
/* from the file student.tad , read line by line , stdout the result*/
/*argument ::  --file student.tad --asc  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char** initialization(int line_count)
{
    char **storage = malloc(30*line_count);
    for (int i = 0; i < line_count; i++)
    {
        storage[i] = NULL;
    }
    return storage;
}
int count_line(char *name){
    FILE *fp = fopen(name, "r");
    char line[30];
    int line_count = 0 ;
    while (fgets(line, 30, fp) != NULL)
    {
        line_count += 1;
    }
    fclose(fp);
    return line_count;
}


char** read_file(char *name, int line_count)
{
    FILE *fp = fopen(name, "r");
    int storage_index;
    storage_index = 0;
    char line[30];
    char *string_reference;
    char ** storage;
    storage = initialization(line_count);
    fp = fopen(name, "r");
    while (fgets(line, 30, fp) != NULL)
    {
        string_reference = malloc(30);
        strcpy(string_reference, line);
        storage[storage_index] = string_reference;
        storage_index += 1;
    }
    fclose(fp);

    // for (int i = 0; i < storage_index; i++)
    // {
    //     printf("%s", storage[i]);
    // }
    return storage;
}

void sort_storage(char *order, char**storage, int line_count)
{
    char* var;
    int swap = 0;
    while (swap == 0)
    {
        swap = 1;
        if (strcmp(order, "--asc") == 0)
        {
            for (int i = 0; i < line_count -1; i++)
            {
                if (storage[i][0] > storage[i + 1][0])
                {
                    var = storage[i];
                    storage[i] = storage[i + 1];
                    storage[i + 1] = var;
                    swap = 0;
                }
                
            }
        }
        else
        {
            for (int i = 0; i < line_count-1; i++)
            {
                if (storage[i][0] < storage[i + 1][0])
                {
                    var = storage[i];
                    storage[i] = storage[i + 1];
                    storage[i + 1] = var;
                    swap = 0;
                }
            }
        }
    }
    for (int i = 0; i <line_count; i++)
    {
        printf("%s", storage[i]);
    }
}

    

void Deallocate_memory(char **storage, int line_count)
{
    for (int i = 0; i < line_count; i++)
    {
        free(storage[i]);
        storage[i] = NULL;
    }
    free(storage);
}

int main(int argc, char **argv)
{
    // validate inputted arguments
    
    if (argc < 4)
    {
        printf("parameter mising\n");
        printf("Ex : --file student.tad --asc");
        return 1;
    }
    if (strcmp(argv[3], "--asc") != 0 && strcmp(argv[3], "--desc") != 0)
    {
        printf("parameter mising\n");
        printf("usage: <--asc|--desc> \n");
        printf("Ex : %s --file student.tad --asc", argv[0]);
        return 2;
    }
    /////////////////////
    char ** storage;
    int line_count;
    printf("main.begin\r\n");
    line_count = count_line(argv[2]);
    storage = read_file(argv[2],line_count);

    sort_storage(argv[3], storage,line_count);

    Deallocate_memory(storage,line_count);

    printf("\rmain.end");
    return 0;
}
