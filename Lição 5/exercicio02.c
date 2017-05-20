/**
 * 2. Implementar um programa que imprima a quantidade de
 * números pares e ímpares a partir do seguinte vetor:
 *
 * { 11, 12, 23, 30, 44, 51, 60 }
**/

#include<stdio.h>

int main()
{
    int i, pares, impares;
    int numeros[7] = { 11, 12, 23, 30, 44, 51, 60 };

    pares = 0;
    impares = 0;

    for(i = 0; i < 7; i++)
    {
        if(numeros[i]%2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("%d pares e %d impares", pares, impares);

    getchar();
    return 0;
}










