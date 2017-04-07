/**
 * Fazer um programa que leia os valores reais A, B e C e realize nos mesmos as seguintes
 * regras:
 * 1 - Apresentar A, B e C em ordem crescente.
 * 2 - Apresentar A, B e C em ordem decrescente.
 * Qualquer Outra - Apresentar A, B e C na ordem em que foram digitados.
**/

#include<stdio.h>

int main()
{
    int a, b, c, opcao, ehCrescente;

    printf("Numero A, B e C: ");
    scanf("%d %d %d",&a, &b, &c);

    printf("\nEscolha uma opcao:\n1 - Ordem Crescente.\n2 - Ordem Decrescente.\n\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 1: case 2:
        ehCrescente = opcao == 1;
        if ((!ehCrescente && a > b && a > c) || (ehCrescente && a < b && a < c))
        {
            if ((!ehCrescente && b > c) || (ehCrescente && b < c))
            {
                printf("\n%i %i %i\n", a, b, c);
            }
            else
            {
                printf("\n%i %i %i\n", a, c, b);
            }
        }
        else if ((!ehCrescente && b > a && b > c) || (ehCrescente && b < a && b < c))
        {
            if ((!ehCrescente && a > c) || (ehCrescente && a < c))
            {
                printf("\n%i %i %i\n", b, a, c);
            }
            else
            {
                printf("\n%i %i %i\n", b, c, a);
            }
        }
        else
        {
            if ((!ehCrescente && a > b) || (ehCrescente && a < b))
            {
                printf("\n%i %i %i\n", c, a, b);
            }
            else
            {
                printf("\n%i %i %i\n", c, b, a);
            }
        }
        break;
    default:
        printf("\n%i %i %i\n", a, b, c);
        break;
    }

    getchar();
    return 0;

}
