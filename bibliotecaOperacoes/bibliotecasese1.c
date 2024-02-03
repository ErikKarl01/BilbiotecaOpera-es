#include <stdio.h>
#include "biblioperacoes.h"

int main (void)
{
    float n1, n2, som, sub, muti, div;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &n2);

    som = soma(&n1, &n2);
    sub = subtracao(&n1, &n2);
    muti = mutiplicacao(&n1, &n2);
    div = divisao(&n1, &n2);

    printf("Soma: %.2f, subtração: %.2f, multiplicação: %.2f, divisão: %.2f", som, sub, muti, div);
    return 0;

}