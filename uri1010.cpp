#include<stdio.h>

int main(){
    int num1, num2, qtd1, qtd2;
    float preco1, preco2, pagar;
    scanf("%d %d %f", &num1, &qtd1, &preco1);
    scanf("%d %d %f", &num2, &qtd2, &preco2);
    pagar = ((qtd1*preco1)+(qtd2*preco2));
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);
    return 0;
}