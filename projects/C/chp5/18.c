// Друзья
#include <stdio.h>

int main(void){
    int danbar = 150, friend = 5, week = 0;
    while (friend < danbar){
        week++;
        printf("%d неделя: %d друзей\n", week, friend = (friend-week)*2);
    }
    return 0;
}