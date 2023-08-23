/// Programe pour faire des operation///
#include <stdio.h>

int main()
{
    char operations;
    int value1,value2;
    printf("This programe is a calculator\n");
    printf("Choose the type of operations (+),(-),(*),(/) :\n");
    operations = getchar();
    printf("Give the program a nomber for the operations: \n");
    scanf("%d",&value1);
    printf("Give the program a over nomber for the operations: \n");
    scanf("%d",&value2);
    printf("The programe will do the operation : %d %c %d \n\n",value1,operations,value2);
    switch (operations)
    {
    case '+':
        printf("%d %c %d = %d\n",value1,operations,value2,value1+value2);
        break;
    case '-':
        printf("%d %c %d = %d\n",value1,operations,value2,value1-value2);
        break;
    case '*':
        printf("%d %c %d = %d\n",value1,operations,value2,value1*value2);
        break;
    case '/':
        printf("%d %c %d = %d\n",value1,operations,value2,value1/value2);
        break;
    default:
        break;
    }
    return 0;
}


