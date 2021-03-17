#include<stdio.h>

int main(){
    int numero_empregado, horas_mes;
    float valor_hora, salario;

    scanf("%d %d %f", &numero_empregado, &horas_mes, &valor_hora);
    salario = horas_mes * valor_hora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero_empregado, salario);
    return 0;
}