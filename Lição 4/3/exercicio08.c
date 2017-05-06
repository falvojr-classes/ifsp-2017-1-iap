/*
 * José tem 1,40 metros e cresce 8 centímetros por ano,
 * enquanto João tem 1,10 metros e cresce 17 centímetros
 * por ano. Fazer um programa em linguagem C para calcular
 * e mostrar quantos anos serão necessários para que João
 * ultrapasse José.
 */
#include<stdio.h>

#define INICIO_JOSE 1.40
#define INICIO_JOAO 1.10

#define CRESC_JOSE .08
#define CRESC_JOAO .17

int main()
{
    float jose, joao;
    int ano;

    //Solucão 1: FOR
    jose = INICIO_JOSE;
    joao = INICIO_JOAO;
    for(ano=0; jose > joao; ano++)
    {
        jose += CRESC_JOSE;
        joao += CRESC_JOAO;
    }
    printf("FOR: %d anos!\n", ano);

    //Solucão 2: WHILE
    jose = INICIO_JOSE;
    joao = INICIO_JOAO;
    ano = 0;
    while(jose > joao)
    {
        jose += CRESC_JOSE;
        joao += CRESC_JOAO;
        ano++;
    }
    printf("WHILE: %d anos!\n", ano);

    //Solucão 3: DO WHILE
    jose = INICIO_JOSE;
    joao = INICIO_JOAO;
    ano = 0;
    do
    {
        jose += CRESC_JOSE;
        joao += CRESC_JOAO;
        ano++;
    }
    while(jose > joao);
    printf("DO WHILE: %d anos!\n", ano);
}
