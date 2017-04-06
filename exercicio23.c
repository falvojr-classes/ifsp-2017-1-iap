/*
    O cardápio de uma lanchonete é o seguinte:

    1001 X-Burguer R$ 12,00
    1002 X-Salada R$ 14,50
    1003 Bauru R$ 15,00
    1004 X-Tudo R$ 17,50

    Fazer um programa para ler o código do
    lanche e a quantidade. Calcule o mostre o nome do
    lanche comprado e o valor da compra.
 */
#include<stdio.h>

#define X_BURGUER 12.00
#define X_SALADA 14.50
#define BAURU 15.00
#define X_TUDO 17.50

int main()
{
    int codigo, quantidade;
    float valor;

    printf("Escolha seu lanche:\n");
    printf("1001 - X-Burguer\n");
    printf("1002 - X-Salada\n");
    printf("1003 - Bauru\n");
    printf("1004 - X-Tudo\n");
    printf("Digite o codigo desejado: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo)
    {
    case 1001:
        valor = quantidade * X_BURGUER;
        printf("%d x X-Burguer = R$%.2f", quantidade, valor);
        break;
    case 1002:
        valor = quantidade * X_SALADA;
        printf("%d x X-Salada = R$%.2f", quantidade, valor);
        break;
    case 1003:
        valor = quantidade * BAURU;
        printf("%d x Bauru = R$%.2f", quantidade, valor);
        break;
    case 1004:
        valor = quantidade * X_TUDO;
        printf("%d x X-Tudo = R$%.2f", quantidade, valor);
        break;
    default:
        printf("Codigo inválido!");
        break;
    }
    getchar();
    return 0;
}


