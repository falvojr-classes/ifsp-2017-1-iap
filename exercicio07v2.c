/*
    Escreva um programa que leia um caractere e verifique
    se ele é ou não uma vogal. Sua lógica deve ser robusta
    o suficiente para contemplar vogais maiúsculas e
    minúsculas. Com o objetivo de fixação dos conceitos,
    implemente utilizando estruturas de decisão compostas e
    multiplas.
 */
#include<stdio.h>

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A' ||
       letra == 'e' || letra == 'E' ||
       letra == 'i' || letra == 'I' ||
       letra == 'o' || letra == 'O' ||
       letra == 'u' || letra == 'U') {
        printf("Eh vogal!");
    }
    else {
        printf("Eh consoante!");
    }

    getchar();
    return 0;
}








