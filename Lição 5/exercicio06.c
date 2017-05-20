/**
 * 6. Crie um programa que gere a mesma saída do exercício anterior, mas agora considerando a seguinte matriz:
 *
 * {
 *   { 'I', 'S', '2', '1' },
 *   { 'F', 'P', '0', '6' }
 * }
 */

#include<stdio.h>

#define LINHAS 2
#define COLUNAS 4

int main()
{
    int i, j;
    char matriz[LINHAS][COLUNAS] =
    {
        { 'I', 'S', '2', '1' },
        { 'F', 'P', '0', '6' }
    };

    for(j = 0; j < COLUNAS; j++) {
        if(j == 2) {
            printf("\n");
        }
        for(i = 0; i < LINHAS; i++) {
            printf("%c", matriz[i][j]);
        }
    }

    getchar();
    return 0;
}
