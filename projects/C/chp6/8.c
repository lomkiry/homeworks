#include <stdio.h>
#define BID_BET 1.5
#define WORKING_HOURS 40
#define TAX_FIRST_300 0.15
#define TAX_NEXT_150 0.2
#define TAX_LAST 0.25
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10
#define RATE4 11.2

int main(void){
    int worktime, overtime = 0, bid;
    char ch;
    double total, tax;
    while (1)
    {
        printf("Программа для расчета заработной платы.\n");
        printf("*********************************************************************\n");
        printf("Введите число, соответствующее желаемой тарифной ставке или действию: \n");
        printf("1) $8.75/ч\t\t2) $9.33/ч\n");
        printf("3) $10.00/ч\t\t4) $11.20/ч\n");
        printf("5) Выход\n");
        printf("*********************************************************************\n");
        printf(">>> ");
        while (ch = getchar())
        {
            switch (ch)
            {
            case '1':
                bid = RATE1;
                break;
            case '2':
                bid = RATE2;
                break;
            case '3':
                bid = RATE3;
                break;
            case '4':
                bid = RATE4;
                break;
            case '5':
                return 0;
            default:
                getchar();
                printf("Ошибка ввода. Введдите число от 1 до 5.\n");
                printf(">>> ");
                continue;
            }
            break;
        }
        printf("Введите кол-во отработанных часов за неделю: ");
        scanf("%d", &worktime);
        if(worktime > WORKING_HOURS){
            overtime = worktime - WORKING_HOURS;
            worktime = WORKING_HOURS;
        }
        total = (overtime * bid * BID_BET) + (worktime * bid);

        if(total <= 300){
            tax = total * TAX_FIRST_300;
        }
        else if (total <= 450)
        {
            tax = (300 * TAX_FIRST_300) + ((total - 300) * TAX_NEXT_150);
        }  
        else {
            tax = (300 * TAX_FIRST_300) + (150 * TAX_NEXT_150) + ((total - 450) * TAX_LAST);
        }

        printf("За ваши отработанные часы\n");
        printf("Вы получите %.2lf$, но учитывая налоговый вычет %.2lf$. Налог составил %.2lf$.\n", total, total-tax, tax);
        getchar();
    }
    return 0;
}