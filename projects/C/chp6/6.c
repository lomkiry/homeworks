#include <stdio.h>

int main(void){
    char previous_sym, current_sym;
    int c = 0;

    while ((current_sym = getchar()) != '#')
    {
        if (previous_sym == 'e' && current_sym == 'i')
            c++;
        previous_sym = current_sym;
    }
    
    printf("\"ei\" входит в строку %d раз.\n", c);

    return 0;
}