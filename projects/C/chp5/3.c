#include <stdio.h>

int main(void){
    for(int i = 70; i != 64; i--){
        for(char j = 'F'; j >= i; j--){
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}