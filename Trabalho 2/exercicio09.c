/**
 * 9. Fazer um programa que multiplique uma matriz 3x3 por outra de mesma dimensão.
 * Pesquise e implemente o procedimento matemático de multiplicação de matrizes.
**/

#define ORDEM 3

#include <stdio.h>

int main()
{
    int matrizA[ORDEM][ORDEM] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    int matrizB[ORDEM][ORDEM] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int matrizFinal[ORDEM][ORDEM];
    int i,j,k;

    for (i = 0 ; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            matrizFinal[i][j] = 0;
            for (k = 0; k < ORDEM; k++) {
                matrizFinal[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            printf("%d  ", matrizFinal[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}




