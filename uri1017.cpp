#include<stdio.h>
int main(){
    int T, V;
    double L, D;
    scanf("%d %d", &T, &V);
    D = T*V;
    L = D/12;
    printf("%.3lf\n", L);
    return 0;
}