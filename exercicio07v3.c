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

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("Eh vogal!");
    }
    else {
        printf("Eh consoante!");
    }

    getchar();
    return 0;
}








