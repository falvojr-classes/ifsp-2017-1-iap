/*
    Escreva um programa que leia 3 valores reais: a, b, c.
    Calcule e escreva a média aritmética.
*/

#include<stdio.h>

int main() {
    float a, b, c, media;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("Media = %.2f", media);

    getchar();
    return 0;
}
