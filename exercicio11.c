// Crie um programa que leia um valor inteiro X e diga se ele � par ou �mpar.
#include<stdio.h>

int main() {
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if(x%2 != 0) {
        printf("Numero impar!");
    } else {
        printf("Numero par!");
    }
    getchar();
    return 0;
}
