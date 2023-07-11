/* Programe to sort caracter in order ascending or decending*/
/* from the file student.tad , read line by line , stdout the result*/
/*argument ::  --file student.tad --asc  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** storage[100];

void read_file(char* name)
{
    // char *read_only_data_ref="test";
    // char *read_write_data_ref;
    // read_write_data_ref=malloc(5);
    // strcpy(read_write_data_ref,read_only_data_ref);
    // read_write_data_ref[3] = 'p';
    // read_write_data_ref[4] = '!';

    // printf("filename5 : %s ro %s %i rw %s\n", name, read_only_data_ref, sizeof(read_only_data_ref), read_write_data_ref);
/////////////////////

01144    FILE *fp = fopen(name, "r");

    char line[60];
    char* write_data;
    write_data= malloc(30);

    while (fgets(line, 60, fp) != NULL) //////
    {
        for (int i=0;line!= NULL;i++ ){
            strcpy(write_data,line);        ////!!!! ATTT   !!!!!//
            storage[i]= write_data;
        }
    }
                                        /////
    fclose(fp);
}

int main(int argc, char **argv)
{
    printf("main.begin\r\n");
    // validate inputted arguments
    if ( argc < 4) {
        printf("missing\n");
        return 255;
    }
    read_file(argv[2]);
    printf(storage);
    //char order = argv[3][0];

    printf("\rmain.end");
    return 0;
}
