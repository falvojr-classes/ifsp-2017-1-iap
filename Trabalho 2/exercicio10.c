/**
 * 10. Vetores/Matrizes de caracteres podem ser utilizados para representar cadeias de DNA.
 * As quatro bases encontradas em um DNA são: Adenina (A), Citosina (C), Guanina (G) e
 * Timina (T). Dada as sequências da Tabela abaixo, construir um programa que forneça
 * quais as sequências em que a Adenina aparece mais de 3 vezes
 *
 * Sequencia    Base
 * DNA1         A  T  G  C  A  A  C  T  A
 * DNA2         G  G  C  C  A  A  T  A  T
 * DNA3         C  A  A  T  G  C  C  A  C
 * DNA4         T  T  G  C  C  C  T  T  C
**/

#include <stdio.h>

#define LINHAS 4
#define COLUNAS 9

int main() {
    int i, j, qtdA;
    char matrizDna[LINHAS][COLUNAS] = {
        {'A','T','G','C','A','A','C','T','A'},
        {'G','G','C','C','A','A','T','A','T'},
        {'C','A','A','T','G','C','C','A','C'},
        {'T','T','G','C','C','C','T','T','C'}
    };

    qtdA = 0;

    for (i = 0; i < LINHAS; i++) {
        qtdA=0;
        for (j = 0; j < COLUNAS; j++) {
            if(matrizDna[i][j] == 'A') {
                qtdA++;
            }
        }
        if (qtdA > 3) {
            printf("DNA%d\n", i + 1);
        }
    }

    getchar();
    return 0;
}
