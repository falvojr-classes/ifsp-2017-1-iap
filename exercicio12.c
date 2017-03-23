/*
    Fa�a um programa que leia dois n�meros inteiros A e B
    e retorne o quociente da divis�o entre A e B.
    O programa deve verificar, previamente � divis�o,
    se o valor de B � diferente de zero.
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
        // Para evitar a divis�o de inteiros,
        // a vari�vel "b" foi considerada como float
        // atrav�s do conceito de "cast".
        resultado = a / (float) b;
        printf("Resultado = %.2f", resultado);
    } else {
        printf("Divisao invalida!");
    }
    getchar();
    return 0;
}






