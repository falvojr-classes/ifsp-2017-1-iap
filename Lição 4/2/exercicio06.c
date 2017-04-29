/*
    Faça um programa que leia o nome de um aluno e
    suas três notas em uma disciplina.
    Calcule e mostre o nome e a média desse aluno.
    A seguir, verifique e mostre se ele foi
    aprovado ou reprovado, sendo que a média mínima
    para aprovação é 6.0 pontos.
*/
#include<stdio.h>

int main() {
    char nome[50];
    float n1, n2, n3, media;

    printf("Digite seu nome: ");
    // scanf não aceita espacos: scanf("%s", &nome);
    gets(nome); // gets aceita espacos.
    printf("Digite suas 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    printf("%s teve media %.3f", nome, media);

    if (media >= 6) {
        printf(" APROVADO!");
    } else {
        printf(" REPROVADO!");
    }
    getchar();
    return 0;
}



