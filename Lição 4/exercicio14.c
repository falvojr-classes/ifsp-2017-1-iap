/*
    Faça um programa que leia dois números inteiros
    A e B e imprima o maior deles. Dê um tratamento
    caso estes números forem iguais.
 */

#include<stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if(a > b) {
        printf("%d eh maior!", a);
    } else if(a < b) {
        printf("%d eh maior!", b);
    } else {
        printf("Valores iguais!");
    }
    getchar();
    return 0;
}







