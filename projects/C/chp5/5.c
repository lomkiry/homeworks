// Пирамидка(((
#include <stdio.h>

int main(void){
    char letter;

    printf("Введите букву до которой будет идти пирамидка: ");
    scanf("%c", &letter);

    for(char i = 'A'; i <= letter; i++){
        for(int j = 0; j < letter - i; j++){
            printf(" ");
        }
        for(char j = 'A'; j <= i; j++){
            printf("%c", j);
        }
        for(char j = i - 1; j >= 'A'; j--){
            printf("%c", j); 
        }
        printf("\n");
    }

}