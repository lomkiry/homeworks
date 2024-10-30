// Штука по какой то формуле
#include <stdio.h>

int main(void){
    double n1, n2;
    
    printf("Введите два числа: ");
    scanf("%lf%lf", &n1, &n2);
    
    do
    {
        printf("(%lf-%lf)/(%lf*%lf) = %lf\n", n1, n2, n1, n2, (n1-n2)/(n1*n2));
        printf("Введите два числа (или q для завершения): ");
    } while (scanf("%lf%lf", &n1, &n2) == 2);

    return 0;
}