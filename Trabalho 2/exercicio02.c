/**
 * Faça um programa em linguagem C que escreva todos
 * os números primos dentro de um intervalo fornecido
 * pelo usuário.
 */

#include<stdio.h>

int main()
{
    int limiteInf, limiteSup, numero, divisores, i;

    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInf);

    printf("Digite o limite superior: ");
    scanf("%d", &limiteSup);

    // Alternativa 1 (DO WHILE):
    numero = limiteInf; // Inicializacao
    do {
        divisores = 0;
        for(i = 1; i <= numero; i++) {
            if(numero%i == 0) {
                divisores++;
            }
        }
        if(divisores == 2) {
            printf("Primo: %d\n", numero);
        }
        numero++; // Passo
    }
    while(numero <= limiteSup); // Condicao

    // Alternativa 2 (FOR):
    // FOR(Inicalizacao; Condicao; Passo)
    for(numero = limiteInf; numero <= limiteSup; numero++) {
        divisores = 0;
        for(i=1; i <= numero; i++) {
            if(numero%i == 0) {
                divisores++;
            }
        }
        if(divisores == 2) {
            printf("Primo: %d\n", numero);
        }
    }

    getchar();
    return 0;
}
