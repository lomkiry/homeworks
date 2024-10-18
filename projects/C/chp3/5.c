#include <stdio.h>

int main(void){
    float mbits, sizef;

    printf("Введите размер файла: ");
    scanf("%f", &sizef);
    printf("Введите скорость загрузки в мегабитах: ");
    scanf("%f", &mbits);
    printf("При скорости загрузки %.2f мегабит в секунду файл с размером %.2f мегабайт загружается за %.2f секунд(ы)\n", mbits, sizef, sizef/(mbits/8));

    return 0;
}