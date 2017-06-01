/**
 * 9. Fazer um programa que leia um vetor de 8 posições e troque
 * os 4 primeiros valores pelos 4 últimos e vice-e-versa.
 * Escreva ao final o vetor obtido.
 */

#define CAPACIDADE 8
#define FATOR_TROCA 4

#include<stdio.h>

int main()
{
    int i, vetorA[CAPACIDADE], vetorB[CAPACIDADE];

    for(i = 0; i < CAPACIDADE; i++)
    {
        printf("vetorA[%d] = ", i);
        scanf("%d", &vetorA[i]);

        int indiceCalculado = indice;

        if(indice < FATOR_TROCA) {
            indiceCalculado += FATOR_TROCA;
        } else {
            indiceCalculado -= FATOR_TROCA;
        }

        vetorB[indiceCalculado] = vetorA[i];
    }

    for(i = 0; i < CAPACIDADE; i++)
    {
        printf("%d  ", vetorB[i]);
    }

    getchar();
    return 0;
}
