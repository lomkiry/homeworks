#include <stdio.h>

int main(void){
    char asci;

    printf("Введите число для преобразования: ");
    scanf("%hhd", &asci);
    printf("\nВаш символ из таблицы ASCII: %c\n", asci);

    return 0;
}