#include <stdio.h>

int main(void){
    unsigned int len_in_sm = 0;

    printf("Введите рост в сантиметрах: ");
    scanf("%u", &len_in_sm);
    printf("Ваш рост в дюймах - %0.2f\n", len_in_sm*2.54);

    return 0;
}