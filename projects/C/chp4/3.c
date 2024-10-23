#include <stdio.h>
#define DAY_PER_WEEK 7

int main(void){
    int day = 1;
    while (0 < day)
    {
        printf("Введите кол-во дней: ");
        scanf("%d", &day);
        printf("%d дней составляет %d недели и %d дня.\n", day, day/DAY_PER_WEEK, day%DAY_PER_WEEK);
    }
    
    return 0;
}