// Табличка квадратов и кубиков
#include <stdio.h>

int main(void){
    int low_lim, upp_lim;
    printf("Введите нижний предел: ");
    scanf("%d", &low_lim);
    printf("Введите верхний предел: ");
    scanf("%d", &upp_lim);
    printf("число   квадрат    куб\n");
    for(; low_lim != upp_lim+1; low_lim++){
        printf("%3d   %4d   %2d\n", low_lim, low_lim*low_lim, low_lim*low_lim*low_lim);
    }
    
    return 0;
}