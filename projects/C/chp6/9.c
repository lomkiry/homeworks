#include <stdio.h>

int is_prime(int n);

int main(void){
    int lim;

    printf("Введите целое положительное число: ");
    scanf("%d", &lim);

    for(int i = 1; i <= lim; i++)
        if(is_prime(i))
            printf("Простое число: %d\n", i);

    return 0;
}

int is_prime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    
    return 1;
}