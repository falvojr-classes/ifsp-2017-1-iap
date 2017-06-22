/**
 * 5. Fazer um programa em linguagem C para calcular e
 * escrever a soma dos 15 primeiros termos da série:
 * 100/!0 + 99/!1 + 98/!2 + 97/!3 + ...
 *
 * Resultado esperado: 269.11
**/

#include<stdio.h>

#define QTD_TERMOS 15

float fatorial(float numero) {
    int i;
    float fatorial = 1;
    for(i = 2; i<=numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int i;
    float dividendo, divisor, soma;

    dividendo = 100;

    for(i = 0; i < QTD_TERMOS; i++) {
        soma += dividendo/fatorial(i);
        dividendo--;
    }
    printf("Soma: %.8f\n", soma);

    if (soma > 269.10 && soma < 269.11) {
        printf("Deu certo!\n\n");
    }

    getchar();
    return 0;
}
