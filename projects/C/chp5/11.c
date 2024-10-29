#include <stdio.h>
#define LEN_ARR 7

int main(void){
    int arr[LEN_ARR], num;
    
    printf("Вводите числа в массив(до %d чисел): ", LEN_ARR+1);
    for(int i = 0; i <= LEN_ARR; i++){
        scanf("%d", &num);
        arr[i] = num;
    }    
    printf("Ваши числа в обратном порядке: ");
    for(int i = LEN_ARR; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}