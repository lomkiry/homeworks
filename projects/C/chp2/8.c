#include <stdio.h>

int main(void){
    float cups;

    printf("Введите кол-во чашек: ");
    scanf("%f", &cups);
    printf("Ваше значение в пинтах: %0.3f\n", cups/2);
    printf("Ваше значение в чашках: %0.3f\n", cups);
    printf("Ваше значение в унциях: %0.3f\n", cups*8);
    printf("Ваше значение в столовых ложках: %0.3f\n", cups*16);
    printf("Ваше значение в чайных ложках: %0.3f\n", cups*48);

    return 0;
}