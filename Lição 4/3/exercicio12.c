/**
 * 13. Implemente um programa que calcule a potência a partir de
 * 2 número inteiros X e Y, onde X deve ser considerado a base
 * e Y é o expoente. Além disso, seu algoritmo OBRIGATORIAMENTE
 * não deve utilizar a biblioteca math.h.
 */

#include<stdio.h>
#include<math.h>

int main()
{
    int base, expoente, potencia, i;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    for(i = 0; i < expoente; i++)
    {
        potencia*=base;
    }

    printf("\n%d^%d = %d\n", base, expoente, potencia);

    getchar();
    return 0;
}
