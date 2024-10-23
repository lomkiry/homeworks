#include <stdio.h>

void Temperatures(double far);

int main(void){
    int check = 1;
    double Far;
    while (check == 1)
    {
        printf("Введите значение в Фаренгейтах: ");
        check = scanf("%lf", &Far);
        Temperatures(Far);
    }
    
    return 0;
}

void Temperatures(double far){
    const double for_c = 32.0, for_kel = 273.16;
    double cels, kelv;

    cels = 5.0 / 9.0 * (far - for_c);
    kelv = cels + for_kel;

    printf("\n\nТемпература по Фаренгейту: %.2lf F\n", far);
    printf("Температура по Цельсию: %.2lf C\n", cels);
    printf("Температура по Кельвину: %.2lf K\n\n\n", kelv);

}