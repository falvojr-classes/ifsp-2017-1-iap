/*
 * Escreva um programa em Linguagem C que leia a
 * altura (em metros) de um grupo de 20 pessoas,
 * calcule e exiba:
 *   A maior altura do grupo;
 *   A altura média do grupo;
 *   O número de pessoas com altura superior a dois metros.
 */
#include<stdio.h>

#define PESSOAS 20

int main() {
    float altura, maior, media;
    int i, qtdMaiores2m;

    maior = 0;
    media = 0;
    qtdMaiores2m = 0;

    for(i=1; i <= PESSOAS; i++) {
        printf("Altura pessoa %d: ", i);
        scanf("%f", &altura);
        // maior altura
        if(altura > maior) {
            maior = altura;
        }
        // media (soma)
        media += altura;
        // quantidade pessoas > 2m
        if(altura >= 2) {
            qtdMaiores2m++;
        }
    }

    media = media / PESSOAS;

    printf("\nMaior: %.2f", maior);
    printf("\nMedia: %.2f", media);
    printf("\nMaiores de 2m: %d", qtdMaiores2m);
}
