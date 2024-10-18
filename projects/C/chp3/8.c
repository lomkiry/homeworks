#include <stdio.h>
#define MILE 1.609
#define GALON 3.785

int main(void){
    float pred_mile;
    short iz_galon;

    printf("Введите кол-во преодаленных миль: ");
    scanf("%f", &pred_mile);
    printf("Введите кол-во использованных галонов: ");
    scanf("%hd", &iz_galon);
    printf("Кол-во миль пройденных на одном галоне горючего: %.1f\n", pred_mile/iz_galon);
    printf("На 100 километров затрата горючего в литрах: %.f\n", (100/((pred_mile/iz_galon)*MILE))*GALON);

    return 0;
}