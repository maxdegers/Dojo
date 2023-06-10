/* boucle while key not press ,Print = basse 10 / base 2 / ASCII*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char input, var = 1 ;
    while (var == 1)
    {
        // scanf("%c", &input);
        input = getch();

        printf("The input value is:%c\n", input);
        printf("The decimal value is:%d\n", input);

        printf("The binaire value is: ", input);
        for (int i = 7; i >= 0; --i)
        {
            putchar((input & (1 << i)) ? '1' : '0');
        }
        printf("\n\n");
        if (input == 'q')
        {
            var = 0;
        }
        
    }

    return 0;
}
