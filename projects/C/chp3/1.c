#include <stdio.h>

int main(void){
    char surname[20], name[20];

    printf("Введите фамилию: ");
    scanf("%s", surname);
    printf("Введите имя: ");
    scanf("%s", name);

    printf("%s, %s\n", surname, name);

    return 0;
}