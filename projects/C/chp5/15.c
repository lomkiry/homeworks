// чтение 255 символов и вывод их
#include <stdio.h>

int main(void){
    char arr[255];
    printf("Вводите свои 255 символов: ");
    for(int i = 0; i < 255; i++){
        scanf("%c", &arr[i]);
    }
    printf("\n\n\n\n\n\nВот ваш ввод в обратном порядке:\n");
    for(int i = 254; i >= 0; i--){
        printf("%c", arr[i]);
    }

    return 0;
}