/**
 * Fazer um programa que leia um vetor de caracteres de 20
 * posições e uma letra X qualquer. Seu programa deverá
 * fazer uma busca do valor de X no vetor lido e informar
 * a posição em que foi encontrado.
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

#define LINHAS 3
#define COLUNAS 3

int main( ) {
    int matriz[LINHAS][COLUNAS], x;
    int i, j;

    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite X: ");
    scanf("%d", &x);

    int achei = 0;
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            if(x == matriz[i][j]) {
                achei++;
                printf("Encontrei: matriz[%d][%d]!\n", i, j);
            }
        }
    }

    if (achei == 0) {
        printf("Nao encontrei!");
    }

    getchar();
    return 0;
}
