#include "matrixfunc.h"

int matrix[ROW][COL] = {};

void inputmatrix(){
    printf("\n");
    int n, check;
    for(int i = 0; i < COL; i++){
        for(int j = ROW - 1; j >= 0; j--){
            int *p = (int *)matrix + i*COL + j;
            while (1)
            {
                if (scanf("%d", &n) == 0) {
                    printf("Ошибка Ввода!\n");
                    while(getchar() != '\n');
                }
                else {
                    *p = n;
                    break;
                }
            }    
        }
    }
}

void printmatrix(){
    printf("\n");
    int *p = (int *)matrix;
    for (int i = 0; i < COL; i++){
        for (int j = 0; j < ROW; j++){
            printf("[%d][%d] %4d    ", i, j, *p);
            p++;
        }
        printf("\n");
    }
} 


void binaryindex(){
    int *p = (int *)matrix, k;
    while (1)
    {
        printf("Введите k: ");
        if (scanf("%d", &k) == 0){
            printf("Ошибка Ввода!\n");
            while(getchar() != '\n');
        }
        else
            break;
    }
    for (int i = 0; i < COL; i++){
        for(int j = 0; j < ROW; j++){
            if (*(p+i*COL+j) < k)
                printf("Двумерный ндекс значения большего k(значение = %d): [%d][%d]\n", *(p+i*COL+j), i, j);
        }
    }
}

void summeven(){
    printf("\n");
    int total = 0, *p = (int *)matrix;
    for(int i = 1; i < COL; i = i + 2){
        for(int j = 0; j < ROW; j++){
            total = total + *(p + i + j * ROW);
        }
    }
    printf("Сумма всех четных столбцов матрицы: %d\n", total);
}