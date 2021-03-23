#include<stdio.h>
#include<math.h>
int main(){
    int A, B, C, M1, M2;
    scanf("%d %d %d", &A, &B, &C);
    M1 = (A+B+abs(A-B))/2;
    M2 = (M1+C+abs(M1-C))/2;
    printf("%d eh o maior\n", M2);
    return 0;
}