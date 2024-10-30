// Бесконечные последовательности
#include <stdio.h>

double math1(int lim);
double math2(int lim);

int main(void){
    int lim = 1;
    double total1, total2;

    printf("Введите предел количества элементов: ");
    scanf("%d", &lim);
    total1 = math1(lim);
    total2 = math2(lim);

    printf("Первая последовательность: %lf\n", total1);
    printf("Вторая последовательность: %lf\n", total2);

    while (lim > 0) {
        printf("Введите предел количества элементов(или число < 0 для заврешения программы): ");
        scanf("%d", &lim);
        
        total1 = math1(lim);
        total2 = math2(lim);

        printf("Первая последовательность: %lf\n", total1);
        printf("Вторая последовательность: %lf\n", total2);
    }
    
    return 0;
}

double math1(int lim) {
    double total = 0;
    for (int i = 1; i <= lim; i++) {
        total += 1.0 / i;
    }

    return total;
}

double math2(int lim) {
    double total = 0.0;
    double sign = 1.0;
    for (int i = 1; i <= lim; i++) {
        total += sign * (1.0 / i);
        sign = -sign;  
    }
    return total;
}