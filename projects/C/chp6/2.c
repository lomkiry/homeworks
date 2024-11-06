#include <stdio.h>

int main(void){
    char ch;
    int c = 1;
    while ((ch = getchar()) != '#')
    {
        if(ch == '\n'){
            continue;
        }
        printf("%c--%d\t", ch, ch);
        if(c % 8 == 0){
            printf("\n");
        }
        c++;
    }
    
}