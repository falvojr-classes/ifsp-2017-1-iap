/**
 * 6. Fazer um programa que leia um vetor de caracteres de 20
 * posições e uma letra X qualquer. Seu programa deverá
 * fazer uma busca do valor de X no vetor lido e informar
 * a posição em que foi encontrado.
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

#define N 20

int main( ) {
    char vetor[N], x;
    int i;

    printf("Digite %d caracteres:\n", N);
    for(i = 0; i < N; i++) {
        scanf("\n%c", &vetor[i]);
    }

    printf("\nDigite X: ");
    scanf("\n%c", &x);

    int indiceX = -1;
    for(i = 0; i < N; i++) {
        if(x == vetor[i]) {
            indiceX = i;
            printf("Encontrei no indice %d!\n", indiceX);
        }
    }

    if (indiceX == -1) {
        printf("Nao encontrei!");
    }

    getchar();
    return 0;
}
