#include "matrixfunc.h"


int main(void){
    char ch;
    int *start;

    do
    {
        printf("a. Построчный ввод справа-на-лево\n");
        printf("b. Представление массива (матрица значений)\n");
        printf("c. Определение двумерных индексов элементов значения которых ниже заданного k.\n");
        printf("d. Определить сумму всех четных столбцов матрицы.\n");
        printf("e. Выход.\n");
        printf(">>> ");
        switch (ch = getchar())
        {
        case 'a':
            inputmatrix();
            break;
        case 'b':
            printmatrix();
            break;
        case 'c':
            binaryindex();
            break;
        case 'd':
            summeven();
            break;
        case 'e':
            return 0;
        case EOF:
            return 0;
            break;
        default:
            printf("Неверное значение.\n\n");
            break;
        }
    while (getchar() != '\n');
    } while (1);
}