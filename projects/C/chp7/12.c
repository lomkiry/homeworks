#include <stdio.h>

int main(void){
    char ch;
    int c = 0;

    while ((ch = getchar()) != EOF)
    {
        c+=1;
    }
    printf("Вот количство символов которые вы ввели: %d\n", c);

    return 0;
}