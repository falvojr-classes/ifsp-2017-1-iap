/**
 * 11. Uma pesquisa foi realizada entre os habitantes de uma cidade e foram
 * coletados dados referentes ao salário e ao número de filhos. Faça um
 * programa que leia os dados, calcule e mostre:
 *
 * a) A média dos salários da população;
 * b) A média do número de filhos;
 * c) O maior salário;
 * d) A percentagem de pessoas com salários até R$ 500,00.
 *
 * Para finalizar a leitura de dados, o usuário deverá informar um salário
 * com valor negativo.
 */

#include<stdio.h>

int main()
{
    float salario, mediaSalario, mediaFilhos, maiorSalario, porcentagem500;
    int qtdFilhos, qtdPessoas;

    qtdPessoas = 0;
    mediaSalario = 0;
    mediaFilhos = 0;
    maiorSalario = 0;
    porcentagem500 = 0;

    do
    {
        printf("Pessoa %d, digite seu Salario e Numero de Filhos: ", qtdPessoas + 1);
        scanf("%f %d", &salario, &qtdFilhos);
        if(salario < 0) {
            break;
        }
        mediaSalario += salario;
        mediaFilhos += qtdFilhos;
        if(salario > maiorSalario) {
            maiorSalario = salario;
        }
        if(salario <= 500) {
            porcentagem500++;
        }
        qtdPessoas++;
    }
    while(1);

    mediaSalario /= qtdPessoas;
    mediaFilhos /= qtdPessoas;
    porcentagem500 = (porcentagem500 * 100) / qtdPessoas;

    printf("\nMedia Salario: %.2f", mediaSalario);
    printf("\nMedia Filhos: %.2f", mediaFilhos);
    printf("\nMaior Salario: %.2f", maiorSalario);
    printf("\nPorcentagem Salario <= 500: %.2f", porcentagem500);

    getchar();
    return 0;
}



