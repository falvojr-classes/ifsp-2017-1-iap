/*
    Fa�a um programa que leia dois n�meros inteiros
    A e B e imprima o maior deles. D� um tratamento
    caso estes n�meros forem iguais.
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







