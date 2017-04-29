/// Faça um programa que escreva a tabuada de um
/// número inteiro fornecido.

#include<stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
    }

    getchar();
    return 0;
}
