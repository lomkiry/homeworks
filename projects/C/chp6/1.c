// Подсчет символов кроме #
#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int blank = 0, newline = 0, other = 0;
    printf("Вводите символы: ");
    while ((ch = getchar()) != '#')
    {
        if(ch == ' ')
            blank++;
        else if(ch == '\n')
            newline++;
        else
            other++;
    }
    printf("Было введено\n");
    printf("Пробелов: %d\tСимволов новой строки: %d\tОстальных символов: %d\n", blank, newline, other);
    return 0;
}