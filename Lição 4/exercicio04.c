/*
 * Faça um programa que leia os valores A, B, C e diga
 * se a soma de A + B é menor, maior ou igual a C.
 */

#include<stdio.h> // Biblioteca de Entrada e Saída (I/O)

int main() { // Inicio do programa
    int a, b, c, somaAB; // Declaracão das variáveis

    printf("Digite os valores A, B e C: "); // Escrita
    scanf("%d %d %d", &a, &b, &c); // Leitura

    somaAB = a + b; // Atribuicão de operacão matemática

    if (somaAB > c) { // Conficão IF
        printf("A + B é maior que C");
    }
    else if (somaAB < c) { // Condicão ELSE IF
        printf("A + B é menor que C");
    }
    else { // Condicão ELSE
        printf("A + B é igual a C");
    }
    getchar();
    return 0;
} // Fim do programa
