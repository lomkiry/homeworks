#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;

    printf("Введите первую сторону треуольника: ");
    scanf("%lf", &a);
    printf("Введите вторую сторону треуольника: ");
    scanf("%lf", &b);
    printf("Введите третью сторону треуольника: ");
    scanf("%lf", &c);

    if (a+b>c && a+c>b && b+c>a){
        double pS = (a+b+c)/2;
        double S = sqrt(pS*(pS-a)*(pS-b)*(pS-c));
        printf("Площадь треугольника: %0.2f", S);
    }
    else {
      printf("Нет такого треугольника.");
    }
    
    return 0;
}