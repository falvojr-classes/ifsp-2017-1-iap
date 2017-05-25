/**
 * 7. Fazer um programa para ler um vetor X de elementos inteiros
 * e positivos, de dimensão N (N <= 10). Criar um vetor Y da seguinte
 * forma: os elementos de Y com índice par receberão os respectivos
 * elementos de X divididos por 2; os elementos com índice ímpar
 * receberão os respectivos elementos de X multiplicados por 3.
 * Escrever o vetor X e o vetor Y.
 */

#define CAPACIDADE 5

#include<stdio.h>

int main()
{
    int i, vetorX[CAPACIDADE];
    float vetorY[CAPACIDADE];

    for(i = 0; i < CAPACIDADE; i++) {
        printf("vetorX[%d] = ", i);
        scanf("%d", &vetorX[i]);
        int valorX = vetorX[i];
        if(i%2 == 0) {
            vetorY[i] = valorX / 2.0;
        }
        else {
            vetorY[i] = valorX * 3;
        }
    }

    printf("Imprimindo Vetor X:");
    for(i = 0; i < CAPACIDADE; i++) {
        printf("  %d", vetorX[i]);
    }

    printf("\nImprimindo Vetor Y:");
    for(i = 0; i < CAPACIDADE; i++) {
        printf("  %.2f", vetorY[i]);
    }

    printf("\n");
    getchar();
    return 0;
}
