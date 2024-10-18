#include <stdio.h>
int main(void){
        char bigsize = 127;
        float fbigsize = 3.4e38;

        printf("%d + 10 = %hhd\n", bigsize, bigsize+10);
        printf("%f * 100.0f = %f\n", fbigsize, fbigsize*100.0f);

        return 0;
}
