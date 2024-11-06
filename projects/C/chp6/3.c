#include <stdio.h>

int main(void){
    int n = 0, even_c = 0, sum_even = 0, odd_c = 0, sum_odd = 0;

    while (1)
    {
        printf("Введите число: ");
        scanf("%d", &n);
        if (n == 0)
            break;
        else if(n % 2 == 0) {
            even_c++;
            sum_even+=n;
        }
        else {
            odd_c++;
            sum_odd+=n;
        }
    }
    printf("Было введено %d четных и %d нечетных\n", even_c, odd_c);
    printf("Среднее значение четных %d и среднее значение нечетных %d\n", sum_even/even_c, sum_odd/odd_c);

    return 0;
}