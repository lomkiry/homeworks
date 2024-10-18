#include <stdio.h>

int main(void){
    float sm;
    char name[20];
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Введите рост в сантиметрах: ");
    scanf("%f", &sm);
    printf("%s, ваш рост составляет %.2f метров(-а)\n", name, sm/100);

    return 0;
}