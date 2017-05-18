/**
 * 15. Elabore um algoritmo que receba um valor inteiro
 * e informe se o valor recebido é um número primo. Números
 * primos são os números naturais que têm apenas dois divisores:
 * 1 e ele mesmo.
**/

#include<stdio.h>

int main()
{
    int numero, divisores, i, cont = 0;

    divisores = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    // Melhoria 2 (numero/2)
    for(i=1; i <= numero/2; i++) {
        cont++;
        if(numero%i == 0) {
            divisores++;
            // Melhoria 1
            if(divisores > 1) {
                break;
            }
        }
    }

    printf("Esforco de %d loops\n", cont);

    // Igual a um porque dividimos o numero/2 no FOR (melhoria 2)
    if(divisores == 1) {
        printf("O numero %d eh primo!\n", numero);
    }
    else {
        printf("O numero %d nao eh primo!\n", numero);
    }

    getchar();
    return 0;
}
