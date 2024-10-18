#include <stdio.h>

int main(void){
    float num;

    scanf("%f", &num);
    printf("%f, %e\n", num, num);
    printf("%+f, %+e\n", num, num);

    return 0;
}