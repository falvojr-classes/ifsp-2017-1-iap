/// Faça um programa que escreva a soma dos múltiplos de
/// 7 entre 100 e 200.

#include<stdio.h>

#define LIMITE_INF 100
#define LIMITE_SUP 200
#define MULTIPLO 7

int main() {
    int i, soma = 0, cont = 0;

    for(i = LIMITE_INF; i <= LIMITE_SUP; i++) {
        if(i%MULTIPLO == 0) {
            soma += i;
        }
        cont++;
    }
    printf("Alternativa 1 (repeticoes): %d\n", cont);
    printf("Soma: %d\n\n", soma);

    // Zera as variaveis para alternativa 2:
    soma = 0;
    cont = 0;
    // Alternativa 2:
    i = LIMITE_INF;
    while(i <= LIMITE_SUP) {
       if(i%MULTIPLO == 0) {
            soma += i;
            i+=MULTIPLO;
        } else {
            i++;
        }
        cont++;
    }
    printf("Alternativa 2 (repeticoes): %d\n", cont);
    printf("Soma: %d", soma);

    getchar();
    return 0;
}
