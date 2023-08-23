/* Ex 1 page 311*/
#include <stdio.h>
struct automobile{
        int* year;
        char model[10];
        int engine_power;
        double weight;
    } sedan = {
        1997,
        "Ney Model",
        200,
        2345.67};
typedef struct automobile V;
V porsche ={
    2023,
    "GBC",
    200,
    3000.55};
int main()
{
    printf("%d\n",sedan->year);
    printf("%s\n",sedan.model);
    printf("%d\n",sedan.engine_power);
    printf("%0.2f\n",sedan.weight);
    
    printf("\n%d\n",porsche.year);
    printf("%s\n",porsche.model);
    printf("%d\n",porsche.engine_power);
    printf("%0.2f\n",porsche.weight);
    return 0;
}
