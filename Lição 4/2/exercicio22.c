/*
    Fa�a um programa para ler o consumo de �gua
    de uma resid�ncia e calcular o valor da conta
    de �gua, considerando a seguinte tabela de gastos:

    At� 10 = R$ 2,20
    Entre 10 e 20 = R$ 2,50
    Acima de 20 = R$ 3,00

    Al�m disso, deve-se acrescentar 4% ao valor da
    conta pela manuten��o do hidr�metro.
 */
#include<stdio.h>

#define VALOR_MINIMO 2.20
#define VALOR_NORMAL 2.50
#define VALOR_MAXIMO 3.00
#define TAXA_HIDROMETRO 1.04 // 4% a mais

int main()
{
    float consumo, valor;

    printf("Digite o consumo (m3): ");
    scanf("%f", &consumo);

    if(consumo <= 10)
    {
        valor = consumo * VALOR_MINIMO;
    }
    else if(consumo <= 20)
    {
        valor = consumo * VALOR_NORMAL;
    }
    else
    {
        valor = consumo * VALOR_MAXIMO;
    }

    valor *= TAXA_HIDROMETRO;

    printf("Valor a ser pago: %.2f", valor);

    getchar();
    return 0;
}
