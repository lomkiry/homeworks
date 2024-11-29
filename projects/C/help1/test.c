#include <stdio.h>

int main(void){
    int mass[10][10] = {0, 1, 0};
    int *p = mass + 99;

    printf("%p\t%d\n%p\t%d", p, *p, p-1, *(p-1));
    return 0;
}