// Чаки банкрот
#include <stdio.h>

int main(void){
    int win = 1000000, years = 0;
    
    while (win > 0)
    {
        win += win*0.08;
        win-=100000;
        years+=1;
    }
    printf("Пройдет %d\n", years);

    return 0;
}