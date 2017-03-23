/*
    Faça um programa que exiba um menu com as opções
    "1–Multiplicar", "2–Somar", "3–Subtrair" e "4–Dividir".
    Leia a opção desejada, leia dois valores reais,
    execute a operação e exiba o resultado. Utilize,
    obrigatoriamente, o comando switch na solução.
 */

#include<stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Multiplicar\n");
    printf("2 - Somar\n");
    printf("3 - Subtrair\n");
    printf("4 - Dividir\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("Digite os valores de A e B: ");
    scanf("%f %f", &a, &b);
    switch(opcao) {
    case 1:
        resultado = a * b;
        printf("Multiplicacao = %.2f", resultado);
        break;
    case 2:
        resultado = a + b;
        printf("Soma = %.2f", resultado);
        break;
    case 3:
        resultado = a - b;
        printf("Subtracao = %.2f", resultado);
        break;
    case 4:
        if(b != 0) {
            resultado = a / b;
            printf("Divisao = %.2f", resultado);
        } else {
            printf("Divisao invalida!");
        }
        break;
    default:
        printf("Operacao invalida!");
        break;
    }
    getchar();
    return 0;
}








