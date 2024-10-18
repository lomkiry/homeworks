#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    short n;
    printf("Введите имя: ");
    scanf("%s", name);
    n = strlen(name)-3;
    printf("a) \"%s\"\nб) \"%20s\"\nв) \"%-20s\"\nг) \"%*s\n", name, name, name, n, name);

    return 0;
}