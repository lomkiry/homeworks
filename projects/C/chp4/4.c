#include <stdio.h>
#define SM_PER_DUEM 2.54
#define DUEM_PER_FOOT 12

int main(void){
    float sm, duem, foot;

    while (0 < sm)
    {
        printf("Введите высоту в сантиметрах (<=О для выхода из программы): ");
        scanf("%f", &sm);
        
        duem = sm / SM_PER_DUEM;
        foot = (int)(duem / DUEM_PER_FOOT);
        duem = duem - (foot * DUEM_PER_FOOT);
        
        printf("%.1f см = %.0lf футов, %.1lf дюймов\n", sm, foot, duem);

    }
    printf("Работа завершена.\n");

    return 0;
}