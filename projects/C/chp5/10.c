// Сумма квадратов
#include <stdio.h>

int main(void){
    int low_lim, upp_lim, total;
    
    printf("Введите нижний и верхний целочисленные пределы: ");
    scanf("%d%d", &low_lim, &upp_lim);

    do
    {
        total = 0;
        for(int i = low_lim; i <= upp_lim; i++){
            total = total + (i*i);
        }
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n", low_lim*low_lim, upp_lim*upp_lim, total);  
        printf("Введите нижний и верхний целочисленные пределы: ");
        scanf("%d%d", &low_lim, &upp_lim);
    } while (upp_lim > low_lim);
    printf("Работа завершена\n");

    return 0;
}