#include <stdio.h>

void jolly(void){
    printf("Он веселый молодец!\n");
}

void deny(void){
    printf("Никто не может это отрицать!\n");
}

int main(void){
    printf("Он веселый молодец!\n");
    jolly();
    printf("Он веселый молодец!\n");
    deny();

    return 0;
}