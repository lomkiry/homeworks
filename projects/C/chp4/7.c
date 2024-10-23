#include <stdio.h>

double cube(double n);

int main(void){
    double num;

    printf("Введите n которое будем возводить в куб: ");
    scanf("%lf", &num);
    printf("Число = %.3lf\n", cube(num));

    return 0;
}


double cube(double n){
    return n*n*n;
}