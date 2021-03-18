#include<stdio.h>

int main(){
    char nome[15];
    double salario, vendido, cota;

    scanf("%s %lf %lf", &nome, &salario, &vendido);
    cota = ((vendido * 15)/100) + salario;
    printf("TOTAL = R$ %.2f\n", cota);

    return 0;
}