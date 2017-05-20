/**
 * Fazer um programa que leia 10 valores inteiros, armazene-os em um
 * vetor e os imprima em ordem inversa a que foram inseridos.
 */

#include<stdio.h>

#define CAPACIDADE 2

int main() {
    int i, numeros[CAPACIDADE];

    printf("Digite %d numeros inteiros!\n\n", CAPACIDADE);

    for(i = 0; i < CAPACIDADE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\n");
    for(i = CAPACIDADE - 1; i >= 0 ; i--)
    {
        printf("%d\n", numeros[i]);
    }

    getchar();
    return 0;
}
