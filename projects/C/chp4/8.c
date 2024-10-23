#include <stdio.h>

int main(void){
    int firs_oper, sec_oper;

    printf("Эта программа вычисляет результаты деления по модулю.\n");
    printf("Введите целое число, которое будет служить вторым операндом: ");
    scanf("%d", &sec_oper);
    printf("Теперь введите первьй операнд: ");
    scanf("%d", &firs_oper);
    printf("%d %% %d равно %d\n", firs_oper, sec_oper, firs_oper % sec_oper);

    while (0 < firs_oper)
    {
        printf("Введите следующее число для первого операнда (<= О для выхода из программы): ");
        scanf("%d", &firs_oper);
        printf("%d %% %d равно %d\n", firs_oper, sec_oper, firs_oper % sec_oper);
    }
    printf("Готово\n");

    return 0;
}