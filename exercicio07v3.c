/*
    Escreva um programa que leia um caractere e verifique
    se ele é ou não uma vogal. Sua lógica deve ser robusta
    o suficiente para contemplar vogais maiúsculas e
    minúsculas. Com o objetivo de fixação dos conceitos,
    implemente utilizando estruturas de decisão compostas e
    multiplas.
 */
#include<stdio.h>
#include<ctype.h> // Biblioteca auxiliar com as funções toupper e tolower

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    letra = toupper(letra); // Faz com que a variável letra sempre fique maiúscula

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("Eh vogal!");
    }
    else {
        printf("Eh consoante!");
    }

    getchar();
    return 0;
}








