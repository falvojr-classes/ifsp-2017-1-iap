/*
    Escreva um programa que leia um caractere e verifique
    se ele � ou n�o uma vogal. Sua l�gica deve ser robusta
    o suficiente para contemplar vogais mai�sculas e
    min�sculas. Com o objetivo de fixa��o dos conceitos,
    implemente utilizando estruturas de decis�o compostas e
    multiplas.
 */
#include<stdio.h>

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A') {
        printf("Eh vogal!");
    }
    else if(letra == 'e' || letra == 'E') {
        printf("Eh vogal!");
    }
    else if(letra == 'i' || letra == 'I') {
        printf("Eh vogal!");
    }
    else if(letra == 'o' || letra == 'O') {
        printf("Eh vogal!");
    }
    else if(letra == 'u' || letra == 'U') {
        printf("Eh vogal!");
    }
    else {
        printf("Eh consoante!");
    }

    getchar();
    return 0;
}








