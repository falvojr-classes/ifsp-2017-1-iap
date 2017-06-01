/**
 * 8. Fazer um programa para ler uma matriz quadrada A
 * de ordem M (M <= 5) de elementos inteiros. Em seguida
 * obter e mostrar seu elemento minimax. O minimax é o
 * menor elemento da linha que contém o maior elemento
 * da matriz.
 */

#define M 3

#include<stdio.h>

int main()
{
    int matriz[M][M];
    int i, j, maior, linhaMaior, minimax;

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);

            int valor = matriz[i][j];
            if(valor > maior || (i == 0 && j == 0))
            {
                maior = valor;
                linhaMaior = i;
            }
        }
    }
    minimax = matriz[linhaMaior][0];
    for(j = 1; j < M; j++)
    {
        int valor = matriz[linhaMaior][j];
        if(valor < minimax)
        {
            minimax = valor;
        }
    }

    printf("Minimax: %d", minimax);

    getchar();
    return 0;
}
