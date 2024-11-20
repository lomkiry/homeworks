#include <stdio.h>

void put(char, int, int);

int main(void){
    char ch;
    int weight, lenght;
    
    printf("Введите символ который нужно выводить: ");
    ch = getchar();
    printf("Теперь введите сколько раз в строке и сколько строк будет выводиться символ: ");
    scanf("%d %d", &lenght, &weight);
    put(ch, lenght, weight);

    return 0;
}

void put(char ch, int w, int l){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < w; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
}