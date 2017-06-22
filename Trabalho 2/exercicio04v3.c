/**
 * 4. Fazer programa em linguagem C para calcular e escrever o valor da seguinte soma:
 * S = 2^1/50 + 2^2/49 + 2^3/48 + ... + 2^50/1
 *
 * Resultado esperado: 1560828696330240.00
**/

#include<stdio.h>
#include <math.h>

#define BASE 2

int main() {
    float expoente, soma;

    soma=0;

    for(expoente=1; expoente<=50; expoente++) {
        soma += pow(BASE, expoente) / (51 - expoente);
    }
    printf("Soma: %.2f\n", soma);

    if (soma == 1560828696330240.00) {
        printf("Deu certo!\n\n");
    } else {
        printf("Deu errado!\n\n");
    }

    getchar();
    return 0;
}
