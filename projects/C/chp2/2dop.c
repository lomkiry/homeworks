#include<stdio.h>

int main(void){
    int i;
    for (i = 0; i <= 127; i++){
        printf("oct: %o \t dec: %hhd \t hex: %x \t char: %c\n", i, i, i, i);
    }
    return 0;
}