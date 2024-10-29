#include <stdio.h>
#include <string.h>

int main(void){
    char word[50];
    short index;
    printf("Введите слово: ");
    scanf("%s", word);
    
    index = strlen(word);
    
    for(index; index != -1; index--)
        printf("%c", word[index]);
    printf("\n");
    
    return 0;
}