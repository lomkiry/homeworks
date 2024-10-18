#include <stdio.h>

int main(void){
    float sec_in_year = 3.156e7, total;

    printf("Введите возраст в годах: ");
    scanf("%f", &total);
    printf("\nВаше время в секундах: %f\n", total * sec_in_year);

    return 0;
}