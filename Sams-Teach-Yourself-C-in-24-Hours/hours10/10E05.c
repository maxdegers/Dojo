/* Ex 5 page 153*/
#include <stdio.h>

int main (){
    int i,sum;
    sum = 0;
    for (i=1;i<8;i++){
        if ((i%2==0) && (i%3 == 0)){
            continue;
        }
        sum +=i;
        
    }
    printf("The sum is: %d\n", sum);
    return 0;
}