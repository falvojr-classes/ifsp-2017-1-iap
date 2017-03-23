/*
    Faça um programa que leia dois números inteiros A e B
    e retorne o quociente da divisão entre A e B.
    O programa deve verificar, previamente à divisão,
    se o valor de B é diferente de zero.
 */

#include<stdio.h>

int main() {
    int a, b;
    float resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if(b != 0) {
        // Para evitar a divisão de inteiros,
        // a variável "b" foi considerada como float
        // através do conceito de "cast".
        resultado = a / (float) b;
        printf("Resultado = %.2f", resultado);
    } else {
        printf("Divisao invalida!");
    }
    getchar();
    return 0;
}






