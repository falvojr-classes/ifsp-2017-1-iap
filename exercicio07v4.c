/*
    Escreva um programa que leia um caractere e verifique
    se ele � ou n�o uma vogal. Sua l�gica deve ser robusta
    o suficiente para contemplar vogais mai�sculas e
    min�sculas. Com o objetivo de fixa��o dos conceitos,
    implemente utilizando estruturas de decis�o compostas e
    multiplas.
 */
#include<stdio.h>
#include<ctype.h> // Biblioteca auxiliar com as fun��es toupper e tolower

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    letra = toupper(letra); // Faz com que a vari�vel letra sempre fique mai�scula

    switch(letra) {
    case 'A':
        printf("Eh vogal!");
        break;
    case 'E':
        printf("Eh vogal!");
        break;
    case 'I':
        printf("Eh vogal!");
        break;
    case 'O':
        printf("Eh vogal!");
        break;
    case 'U':
        printf("Eh vogal!");
        break;
    default:
        printf("Eh consoante!");
        break;
    }

    getchar();
    return 0;
}








