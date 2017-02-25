/*
    Faça um programa que receba o salário-base de um funcionário, calcule e
    mostre o salário a receber, sabendo-se que esse funcionário recebe gratificação
    de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() {
    float salarioBase, gratificacao, imposto, salarioFinal;

    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * GRATIFICACAO;
    imposto = salarioBase * IMPOSTO;

    salarioFinal = salarioBase + gratificacao - imposto;

    printf("Salario Final: %.2f", salarioFinal);

    getchar();
    return 0;
}
