#include <stdio.h>
#include <float.h>

int main(void){
    double num1 = 1.0/3.0;
    float num2 = 1.0/3.0;

    printf("%.4lf, %.4lf\n", num1, num2);
    printf("%.12lf, %.12f\n", num1, num2);
    printf("%.16lf, %.16f\n", num1, num2);
    printf("--------------------\n");
    printf("fly: %d\ndbl: %d\n", FLT_DIG, DBL_DIG);
    printf("%.6f\n", 1.0/0.3);
    printf("%.12f\n", 1.0/0.3);
    printf("%.16f\n", 1.0/0.3);

    return 0;
}

