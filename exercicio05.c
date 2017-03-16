/*
    Faça um programa que leia dois valores inteiros A e B.
    Se os valores forem iguais deverá calculada a soma
    dos dois valores, caso contrário multiplicar A por B.
    Armazene o resultado em uma variável C.
*/

#include<stdio.h>

int main() {
    int a, b, c;
    char operador;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if(a == b) {
        c = a + b;
        operador = '+';
    } else {
        c = a * b;
        operador = '*';
    }

    printf("\nC = A %c B", operador);
    printf("\nC = %d", c);

    getchar();
    return 0;
}
