/*
    O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
    percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
    Faça um programa na Linguagem C que receba o preço de fábrica de um veículo,
    o percentual de lucro do distribuidor e o percentual de impostos.
    Calcule e mostre:
    a) O valor correspondente ao lucro do distribuidor;
    b) O valor correspondente aos impostos;
    c) O preço final do veículo.
*/

#include<stdio.h>

int main() {
    float precoFabrica, lucro, impostos, precoFinal;
    int percentualLucro, percentualImpostos;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFabrica);
    printf("Digite o percentual de lucro: ");
    scanf("%f", &percentualLucro);
    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentualImpostos);

    lucro = precoFabrica * (percentualLucro/100);
    impostos = precoFabrica * (percentualImpostos/100);
    precoFinal = precoFabrica + lucro + impostos;

    printf("\nLucro: R$ %.2f", lucro);
    printf("\nImpostos: R$ %.2f", impostos);
    printf("\nPreco Final: R$ %.2f", precoFinal);

    getchar();
    return 0;
}
