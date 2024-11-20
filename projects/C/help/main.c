#include "myarrfunc.h"


int main(void){
    char ch;
    int *start, size = 0;

    do
    {
        printf("a. Задать размер массива.\n");
        printf("b. Заполнить массив.\n");
        printf("c. Представление массива (значения, адреса).\n");
        printf("d. Поиск индекса последнего отрицательного элемента массива.\n");
        printf("e. Вычисление среднего арифметического значения элементов в заданном диапазоне k,m.\n");
        printf("f. Определить количество элементов массива по значению выше введенного k.\n");
        printf("g. Выход.\n");
        printf(">>> ");
        switch (ch = getchar())
        {
        case 'a':
            printf("\n");  
            size = sizemassive();
            break;
        case 'b':
            if (size != 0){
                printf("\n");  
                start = fillmassive();
            }
            else
                printf("Введите длинну массива\n\n");
            break;
        case 'c':
            if (size != 0){
                printf("\n"); 
                printmassive(start, size);
            }
            else
                printf("Введите длинну массива\n");
            break;
        case 'd':
            if (size != 0){
                printf("\n"); 
                last_negative(size);
            }
            else
                printf("Введите длинну массива\n");
            break;
        case 'e':
            if (size != 0){
                sr_k_m(size);
                printf("\n");
            } 
            else
                printf("Введите длинну массива\n");
            break;
        case 'f':
            if (size != 0){
                printf("\n");
                len_up_k(size);
            }
            else
                printf("Введите длинну массива\n");
            break;
        case 'g':
            printf("Работа законченна.\n");
            return 0;
            break;
        default:
            printf("Неверное значение.\n\n");
            break;
        }
        while (getchar() != '\n');
    } while (1);
}