#include <stdio.h>

int main(void){
    char ch;
    int c = 0;

    while ((ch = getchar()) != '#')
    {
        if(ch == '!'){
            putchar(ch);
            putchar(ch);
            c++;
            continue;
        }
        else if(ch == '.'){
            ch = '!';
            c++;
        }
        putchar(ch);
    }
    printf("Было проведенно %d замен", c);

    return 0;
}