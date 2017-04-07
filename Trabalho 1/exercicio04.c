/**
 * 4. Uma empresa opera com seguros de carros. De acordo com o Tipo e Região do carro,
 * existe uma taxa a ser calculada sobre o preço do mesmo:
 *
 * 1 Pequeno    - 6%
 * 2 Médio      - 8%
 * 3 Grande     - 10%
 *
 * 1 Norte e Nordeste       - 3%
 * 2 Sul e Centro-Oeste     - 5%
 * 3 Sudeste (exceto 4 e 5) - 8%
 * 4 São Paulo              - 10%
 * 5 Rio de Janeiro         - 15%
 *
 * Sendo assim, o valor do seguro é calculado a partir da soma entre as Taxas 1 e 2 aplicadas ao
 * valor do veículo. Com isso, o valor da franquia é calculado de acordo com o valor do seguro:
 * Fazer um programa que leia o Preço, o Tipo e a Região do carro a ser licenciado e, com base
 * nessas informações, apresentar os valores do seguro e da franquia.
 *
 * Menor que R$300,00  - R$400,00
 * R$300,00 a R$500,00 - R$600,00
 * Maior que R$500,00  - R$800,00
*/

#include<stdio.h>

int main()
{
    int tipoVeiculo, tipoRegiao;
    float valorVeiculo, seguro, franquia, taxa1, taxa2;

    printf("Valor do veiculo: R$ ");
    scanf("%f",&valorVeiculo);

    printf("\n1 - Pequeno\n2 - Medio\n3 - Grande\n\nTipo de veiculo desejado: ");
    scanf("%d",&tipoVeiculo);

    printf("\n1 - Norte e Nordeste\n2 - Sul e Centro oeste\n3 - Sudeste(exceto 4 e 5)\n4 - Sao Paulo\n5 - Rio de janeiro\n\nRegiao do veiculo desejada:");
    scanf("%d",&tipoRegiao);

    switch(tipoVeiculo)
    {
    case 1:
        taxa1 = 0.06;
        break;
    case 2:
        taxa1 = 0.08;
        break;
    case 3:
        taxa1 = 0.1;
        break;
    default:
        printf("\nTipo de veículo invalido.");
        break;
    }

    switch(tipoRegiao)
    {
    case 1:
        taxa2 = 0.03;
        break;
    case 2:
        taxa2 = 0.05;
        break;
    case 3:
        taxa2 = 0.08;
        break;
    case 4:
        taxa2 = 0.1;
        break;
    case 5:
        taxa2 = 0.15;
        break;
    default:
        printf("\nRegiao do veiculo invalida.");
        break;
    }

    seguro = (taxa1 + taxa2) * valorVeiculo;

    if(seguro < 300)
    {
        franquia = 400;
    }
    else if(seguro > 500)
    {
        franquia = 800;
    }
    else
    {
        franquia = 600;
    }

    printf("\nValor do seguro: R$ %.2f", seguro);
    printf("\nValor da franquia: R$ %.2f\n", franquia);

    getchar();
    return 0;
}
