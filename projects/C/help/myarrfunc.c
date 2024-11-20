#include "myarrfunc.h"
int size;
int massive[1000] = {0};

int sizemassive(){

    printf("Введите длинну массива: ");
    scanf("%d", &size);

    return size;
}

int *fillmassive(){
    printf("Вводите значение массива через пробел\n");
    printf(">>> ");
    for(int i = 0; i < size; i++){
        scanf("%d", &massive[i]);
    }

    return massive;
}

void printmassive(int *start, int size){
    printf("\n");
    for(int i = 0; i < size; i++, start++){
        printf("Value: %d\n", *start);
        printf("Addres: %p\n", start);
    }
    printf("\n");
}

void last_negative(int size){
    int l = -1;
    for(int i = size; i >= 0; i--){
        if(massive[i] < 0){
            l = i;
            break;
        }
    }
    if (l == -1)
        printf("Такого числа нету.\n\n");
    else
        printf("Индекс последнего отрицательного числа: %d\n\n", l);
}

void sr_k_m(int size){
    int k, m, sr = 0, c = 0;
    while (1) {
        printf("Введите диапозон значений через пробел: ");
        scanf("%d %d", &k, &m);
        if (k < m && k >= 0 && m <= size-1)
            break;
        else
            printf("Ошибка!\n");
    }
    for (int i = k; i <= m; i++) {
        sr+=massive[i];
        c++;
    }
    printf("Среднее арифмитическое в %d-%d диапозоне равно: %d\n", k, m, sr/c);
}

void len_up_k(int size){
    int k, c = 0;
    printf("Введите значение k: ");
    scanf("%d", &k);
    for(int i = 0; i < size; i++)
        if (massive[i] > k)
            c++;
    printf("%d %s больше k\n", c, (c == 1) ? "значение" : (c >= 2 && c <= 4) ? "значения" : "значений");
}