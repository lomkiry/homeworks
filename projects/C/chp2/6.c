#include <stdio.h>

int main(void){
    float quart;

    printf("Введите объем воды в квартах: ");
    scanf("%f", &quart);
    printf("\nВ %0.f квартах содержится %0.f молекул.", quart, (quart*950) / (3e-23));

    return 0;
}