// Два массива и че то там еще
#include <stdio.h>

int main(void){
    double arr1[8], arr2[8], c;

    for(int i = 0; i < 8; i++){
        printf("Введите число в массив: ");
        scanf("%lf", &c);
        arr1[i] = c;
    }
    arr2[0] = arr1[0];
    for(int i = 1; i < 8; i++){
        arr2[i] = arr2[i-1] + arr1[i];
    }
    
    for (int i = 0; i < 8; i++) {
        printf("%7.8lf ", arr1[i]); 
    }
    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("%7.8lf ", arr2[i]);
    }
    printf("\n");
    return 0;
}