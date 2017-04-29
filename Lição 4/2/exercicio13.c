/*
    Escreva um algoritmo para receber o nome,
    o sexo ('M' ou 'F') e a idade de uma pessoa.
    Se a pessoa for do sexo feminino e tiver menos
    de 25 anos, imprimir o nome e a mensagem "aceita".
    Caso contrário, imprimir o nome e a mensagem
    "não aceita".
 */
#include<stdio.h>
#include<ctype.h>

int main() {
    char nome[50], sexo;
    int idade;

    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o genero (M ou F): ");
    scanf("%c", &sexo);
    printf("Digite a idade: ");
    scanf("%i", &idade);

    // Garante que a letra da variável sexo seja
    // sempre minúscula.
    sexo = tolower(sexo);

    if(sexo == 'f' && idade < 25) {
        printf("%s aceita!", nome);
    } else {
        printf("%s nao aceito(a)!", nome);
    }
    getchar();
    return 0;
}









