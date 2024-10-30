// Масив int с степенями двойки
#include <stdio.h>
#define LEN_ARR 8


int pow_2(int lim);

int main(void){
    int arr[LEN_ARR], interim = 1;

    for(int i = 0; i <= 8; i++){
        arr[i] = interim * 2;
        interim = interim * 2;
    }

    int i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while (i < 8);
    
    return 0;
}
