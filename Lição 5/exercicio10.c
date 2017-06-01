/*
10- Fazer um programa para ler uma matriz A de ordem M de elementos inteiros,
 com M <= 10, e verificar se ela é triangula inferior. Uma matriz é triangular
 inferior se todos os elementos acima da diagonal principal forem nulos (igual a zero).
*/

#include <stdio.h>

#define M 3

int main() {
    int matriz[M][M], i, j, ehTringular;

    ehTringular = 1; // VERDADE!

    for (i = 0;  i < M ; i++) {
        for (j = 0;  j < M ; j++) {
            printf("matriz[%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
            if(j > i && matriz[i][j] != 0) {
                ehTringular = 0; // FALSO!
            }
        }
    }

    if(ehTringular == 1) {
        printf("EH!");
    } else {
        printf("N EH!");
    }

    getchar();
    return 0;
}
