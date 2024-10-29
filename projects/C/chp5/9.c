#include <stdio.h>

double expression(double n1, double n2);

int main(void){
    double n1, n2;
    
    printf("Введите два числа: ");
    scanf("%lf%lf", &n1, &n2);
    
    do
    {
        printf("(%lf-%lf)/(%lf*%lf) = %lf\n", n1, n2, n1, n2, expression(n1, n2));
        printf("Введите два числа (или q для завершения): ");
    } while (scanf("%lf%lf", &n1, &n2) == 2);

    return 0;
}

double expression(double n1, double n2){
    return (n1-n2)/(n1*n2);
}