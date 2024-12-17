#include "structfunc.h"

int main(void){
    struct flat home[MAXHOUSES] = {};
    setflat(home);
    viewflat(home);
    return 0;
}