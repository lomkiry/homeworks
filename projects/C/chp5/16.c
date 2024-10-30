// Борьба вкладов
#include <stdio.h>

int main(void){
    int years = 0; 
    float cont1 = 100, cont2 = 100;
    while (cont2 <= cont1)
    {
        cont1+=10;
        cont2 += cont2 * 0.05;
        years+=1;
    }
        
    printf("Задача про борьбу двух женщин.\n");
    printf("Нужно %d лет.\n", years);
    printf("Вклад Дафаны: $%f\n", cont1);
    printf("Вклад Дейдры: $%f\n", cont2);

    return 0;
}