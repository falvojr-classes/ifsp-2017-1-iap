/**
 * Uma empresa deseja automatizar as folhas salariais de seus funcion�rios atrav�s de um
 * formul�rio com as seguintes informa��es: Nome, N�mero de Horas Trabalhadas e
 * N�mero de Dependentes. Para isso, alguns requisitos foram elicitados:
 *
 * a. O valor pago por hora � R$22.50;
 * b. O valor pago por dependente � R$50.00;
 * c. Sobre o sal�rio bruto s�o descontados 8.5% de INSS;
 * d. Sobre o sal�rio bruto s�o descontados 5% de IR.
 *
 * Fa�a um programa na Linguagem C que leia as informa��es solicitadas para o formul�rio e
 * apresente o Nome, o Sal�rio Bruto, os valores descontados para cada tipo de imposto e,
 * finalmente, o Sal�rio L�quido do funcion�rio.
**/

#include<stdio.h>

#define VALOR_HORA 22.50
#define VALOR_DEP 50.00
#define INSS 0.085
#define IR 0.05

int main()
{
    int horasTrabalhadas, numeroDependentes;
    char nome[20];
    float salarioBruto, salarioLiquido, inss, ir;

    printf("Nome: ");
    scanf("%s",&nome);

    printf("Horas Trabalhadas: ");
    scanf("%d",&horasTrabalhadas);

    printf("Numero de Dependentes: ");
    scanf("%d",&numeroDependentes);

    salarioBruto = (horasTrabalhadas * VALOR_HORA) + (numeroDependentes * VALOR_DEP);
    inss = salarioBruto * INSS;
    ir = salarioBruto * IR;
    salarioLiquido = salarioBruto - inss - ir;

    printf("\n%s recebera um Salario Bruto de R$%.2f",nome,salarioBruto);
    printf("\nDesconto de INSS: R$ %.2f",inss);
    printf("\nDesconto de IR: R$ %.2f",ir);
    printf("\nO Salario Liquido eh de: R$ %.2f\n",salarioLiquido);

    getchar();
    return 0;
}

