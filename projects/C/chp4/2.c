#include <stdio.h>

int main(void){
    int num, total;
    printf("Введите число: ");
    scanf("%d", &num);
    total = num + 10;
    while (num <= total)
    {
        printf("num: %d\n", num);
        num++;
    }
    
    return 0;
}