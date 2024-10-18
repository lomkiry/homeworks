#include <stdio.h>

int main(void){
    float num;

    printf("Введите значение с плавающей запятой: ");
    scanf("%f", &num);
    printf("\nЗапись с фиксированной запятой: %f", num);
    printf("\nЭкспоненциальная форма записи: %e", num);
    printf("\nДвоично-экспоненциальное представление: %a", num);

    return 0;
}