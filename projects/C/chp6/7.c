#include <stdio.h>
#define BID 10
#define BID_BET 1.5
#define WORKING_HOURS 40
#define OVERTIME 1.5
#define TAX_FIRST_300 0.15
#define TAX_NEXT_150 0.2
#define TAX_LAST 0.25

int main(void){
    int worktime, overtime = 0;
    double total, tax;
    
    printf("Программа для расчета заработной платы.\n");
    printf("Введите кол-во отработанных часов за неделю: ");
    scanf("%d", &worktime);
    if(worktime > WORKING_HOURS){
        overtime = worktime - WORKING_HOURS;
        worktime = WORKING_HOURS;
    }
    total = (overtime * BID * BID_BET) + (worktime * BID);

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

    return 0;
}