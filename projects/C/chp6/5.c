#include <stdio.h>

int main(void){
    char ch;
    int c = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            break;
        case '!':
            putchar('!');
            putchar('!');
            break;
        default:
            putchar(ch);
        }
    }
    printf("Было проведенно %d замен", c);

    return 0;
}