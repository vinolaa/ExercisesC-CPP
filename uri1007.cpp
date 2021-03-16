#include<stdio.h>

int main(){
    int A, B, C, D, R;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    R = ((A*B) - (C*D));
    printf("DIFERENCA = %d\n", R);
    return 0;
}