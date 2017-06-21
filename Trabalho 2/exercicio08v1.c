/**
 * 8. Fazer um programa para ler um vetor V de elementos inteiros de dimensão N (N <= 10).
 * Separar este vetor em dois vetores A e B. O vetor A deve conter os elementos positivos
 * de V e o vetor B os elementos negativos de V. Os elementos nulos (iguais a zero) de V
 * não devem ser gravados, mas devem ser contados. Escrever os vetores V, A e B. Escrever
 * quantos elementos nulos foram encontrados em V.
**/

#include <stdio.h>

#define DIMENSAO 5

int main() {
    int v[DIMENSAO], a[DIMENSAO], b[DIMENSAO];
    int i, qtdA, qtdB, qtdNulos;

    qtdA = 0;
    qtdB = 0;
    qtdNulos=0;

    for (i = 0;  i < DIMENSAO; i++) {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);

        int valor = v[i];
        if (valor > 0) {
            a[qtdA++] = valor;
        }
        else if (valor < 0) {
            b[qtdB++] = valor;
        }
        else {
            qtdNulos++;
        }
    }

    printf("\nVetor V: ");
    for (i = 0; i < DIMENSAO; i++) {
        printf("%d  ", v[i]);
    }
    printf("\nVetor A: ");
    for (i = 0; i < qtdA; i++) {
        printf("%d  ", a[i]);
    }
    printf("\nVetor B: ");
    for (i = 0; i < qtdB; i++) {
        printf("%d  ", b[i]);
    }

    printf("\nQuantidade Nulos: %d\n" , qtdNulos);

    getchar();
    return 0;
}




