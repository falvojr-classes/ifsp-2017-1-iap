/*
    Um posto está vendendo combustíveis com a seguinte
    tabela de descontos:

    Álcool
        até 20 litros, desconto de 5% por litro
        acima de 20 litros, desconto de 7% por litro
    Diesel
        até 20 litros, desconto de 6% por litro
        acima de 20 litros, desconto de 8% por litro
    Gasolina
        até 20 litros, desconto de 9% por litro
        acima de 20 litros, desconto de 10% por litro

    Escreva um programa que leia o número de litros
    vendidos, o tipo de combustível, calcule e
    imprima o valor a ser pago pelo cliente.
    Sabendo-se que o preço do litro da gasolina é
    R$3,597, do álcool é R$2,497 e do diesel é R$3,097.
 */
#include<stdio.h>

#define GASOLINA 3.597
#define GASOLINA_DESC_MENOR 0.91 // Desconto 9%
#define GASOLINA_DESC_MAIOR 0.90 // Desconto 10%

#define ALCOOL 2.497
#define ALCOOL_DESC_MENOR 0.95 // Desconto 5%
#define ALCOOL_DESC_MAIOR 0.93 // Desconto 7%

#define DIESEL 3.097
#define DIESEL_DESC_MENOR 0.94 // Desconto 6%
#define DIESEL_DESC_MAIOR 0.92 // Desconto 8%

int main() {
    float litros, valor;
    int tipo;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Escolha o tipo de combustivel:\n");
    printf("1 - Alcool\n");
    printf("2 - Gasolina\n");
    printf("3 - Diesel\n");
    printf("Digite o tipo desejado: ");
    scanf("%d", &tipo);
    if(litros > 0) {
        // Litros válidos!
        switch(tipo) {
        case 1:
            if(litros <= 20) {
                // até 20 litros
                valor = ALCOOL * litros * ALCOOL_DESC_MENOR;
            } else {
                // acima de 20 litros
                valor = ALCOOL * litros * ALCOOL_DESC_MAIOR;
            }
            break;
        case 2:
             if(litros <= 20) {
                valor = GASOLINA * litros * GASOLINA_DESC_MENOR;
            } else {
                valor = GASOLINA * litros * GASOLINA_DESC_MAIOR;
            }
            break;
        case 3:
            if(litros <= 20) {
                valor = DIESEL * litros * DIESEL_DESC_MENOR;
            } else {
                valor = DIESEL * litros * DIESEL_DESC_MAIOR;
            }
            break;
        default:
            valor = -999;
            break;
        }
        if(valor == -999) {
            printf("Digite um tipo valido!");
        } else {
            printf("Valor com desconto R$%.2f", valor);
        }
    } else {
        printf("Digite um quantidade de litros positiva!");
    }
    getchar();
    return 0;
}
