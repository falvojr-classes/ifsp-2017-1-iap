/*
    A Organização Mundial de Saúde (OMS) classifica as pessoas
    pela sua faixa etária, de acordo com a tabela a seguir.
    Fazer um programa que leia o nome e a idade de uma pessoa
    e mostre seu nome e sua classificação:
 */
#include<stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    gets(nome);

    printf("\nOla %s!\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Alternativa 1:
    if(idade >= 0 && idade <= 12) {
        printf("Crianca!");
    }
    else if(idade >= 13 && idade <= 18) {
        printf("Adolescente!");
    }
    else if(idade >= 19 && idade <= 59) {
        printf("Aduto!");
    }
    else if(idade >= 60) {
        printf("Idoso!");
    }
    else {
        printf("Digite um numero positivo ;)");
    }

    // Alternativa 2:
    if(idade < 0) {
        printf("Digite um numero positivo ;)");
    } else {
        // O usuário digitou uma idade valida!
        if(idade <= 12) {
            printf("Crianca!");
        }
        else if(idade <= 18) {
            printf("Adolescente!");
        }
        else if(idade <= 59) {
            printf("Aduto!");
        }
        else {
            printf("Idoso!");
        }
    }
}
