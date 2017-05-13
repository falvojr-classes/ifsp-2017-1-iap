/**
 * 14. Elabore um algoritmo que calcule o valor do fatorial de
 * um número informado pelo usuário. Lembrando que 0! = 1; 1! = 1;
 * 2! = 2 * 1 = 2; 3! = 3 * 2 * 1 = 6; etc.
 */

#include<stdio.h>

int main()
{
    int numero, i;
    // http://stackoverflow.com/a/28222471/3072570
    double fatorial;

    fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 2; i <= numero; i++)
    {
        fatorial *= i;
    }

    printf("\n!%d = %lf\n", numero, fatorial);

    getchar();
    return 0;
}

