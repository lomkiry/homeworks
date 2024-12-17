#include "structfunc.h"

    void setflat(struct flat * p){
        for(int i = 0; i < MAXHOUSES; i++){
            fgets((p+i)->address, MAXADRESS, stdin);

            scanf("%d %d %d", &(p + i)->floor, &(p + i)->rooms, &(p + i)->rent);
            while (getchar() != '\n');
        }
    }

void viewflat(struct flat *p){
    for(int i = 0; i < MAXHOUSES; i++){
        printf("Адрес %d: %s", i+1, (p+i)->address);
        printf("Кол-во этажей %d: %d\n", i+1, (p+i)->floor);
        printf("Кол-во комнат %d: %d\n", i+1, (p+i)->rooms);
        printf("Стоимость аренды %d: %d\n", i+1, (p+i)->rent);
        printf("\n");
    }
}