#include <stdio.h>
#define SEC_IN_MIN 60

int main(void){
    int min;

    while (0 < min)
    {
        printf("Введите значение в минутах (введите <= 0 что бы закрыть): ");
        scanf("%d", &min);
        printf("%d ч. %d мин.\n", min/SEC_IN_MIN, min%SEC_IN_MIN);
    }

    return 0;
}