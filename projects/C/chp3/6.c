#include <stdio.h>
#include <string.h>

int main(void){
    char surname[20], name[20];
    int sizesurname, sizename;

    printf("Введите фамилию: ");
    scanf("%s", surname);
    printf("Введите имя: ");
    scanf("%s", name);
    sizesurname = strlen(surname);
    sizename = strlen(name);
    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", sizename, sizename, sizesurname, sizesurname);
    printf("%s %s\n", name, surname);
    printf("%-*d %-*d\n", sizename, sizename, sizesurname, sizesurname);

    return 0;
}