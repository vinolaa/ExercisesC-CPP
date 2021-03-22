#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    double A, B, C, tri, ac, tra, qu, re;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = (A*C)/2;
    ac = PI * pow(C,2);
    tra = ((A+B)/2)*C;
    qu = pow(B,2);
    re = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, ac, tra, qu, re);
    return 0;
}