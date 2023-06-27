/* Programe to sort caracter in order ascending or decending*/
/* from the file student.tad , read line by line , stdout the result*/
/*argument ::  --file student.tad --asc  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_file(char* name)
{
    char *read_only_data_ref="test";
    char *read_write_data_ref;
    read_write_data_ref=malloc(5);
    strcpy(read_write_data_ref,read_only_data_ref);
    read_write_data_ref[3] = 'p';
    read_write_data_ref[4] = '!';

    printf("filename5 : %s ro %s %i rw %s", name, read_only_data_ref, sizeof(read_only_data_ref), read_write_data_ref);

    // char *filename = name;
    // FILE *fp = fopen(filename , "r");

    // char str[60] ;

    // if (fgets(str, 60, fp) != NULL) {
    // /* Writing content to stdout */
    // puts(str);
    // }

    // fclose(fp);
}

int main(int argc, char **argv)
{
    printf("main.begin\r");
    // validate inputted arguments
    if ( argc < 4) {
        printf("missing");
        return 255;
    }

    read_file(argv[2]);
    //char order = argv[3][0];

    printf("\rmain.end");
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     char *filename = "student.tad";
//     FILE *fp = fopen(filename, "r");

//     char str[60];
//     int var = 0;

//     while (str != "----")
//     {
//         if (fgets(str, 60, fp) != NULL)
//         {
//             /* Writing content to stdout */
//             puts(str);
//         }
//     }

//     fclose(fp);
//     return 0;
// }
