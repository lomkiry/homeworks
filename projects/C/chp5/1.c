#include <stdio.h>

int main(void){
    char alph[26];
    
    for(int i = 0; i < 26; i++){
        alph[i] = 97 + i;
    }
    alph[26] = '\0';    
    printf("%s\n", alph);

    return 0;
}