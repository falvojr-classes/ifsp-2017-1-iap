/*
 * Fazer um programa em linguagem C para ler um número não determinado de conjuntos de valores, cada um formado pelo código de um aluno e suas 3 notas. Calcular, para cada aluno, a média ponderada com pesos respectivos de 4 para a maior nota e 3 paras as outras duas. Escrever o código do aluno, suas 3 notas, a média calculada e uma mensagem "aprovado" se nota >= 6 ou "reprovado" para nota < 6. O processamento termina quando for digitado código do aluno igual a zero.
 */
#include<stdio.h>

int main()
{
    int cod;
    float n1, n2, n3, media;

    do
    {
        // Leitura das variaveis
        printf("Digite o codigo: ");
        scanf("%d", &cod);
        if(cod == 0) {
            // Forca o teste no WHILE
            continue;
        }
        printf("Digite as notas 1, 2 e 3: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        // Calculo da media
        if(n1 > n2 && n1 > n3)
        {
            media = n1*0.4 + n2*0.3 + n3*0.3;
        }
        else if (n2 > n3)
        {
            media = n1*0.3 + n2*0.4 + n3*0.3;
        }
        else
        {
            media = n1*0.3 + n2*0.3 + n3*0.4;
        }

        // Verificacão da aprovacão
        if(media < 6) {
            printf("REPROVADO (%.2f)\n\n", media);
        } else {
            printf("APROVADO (%.2f)\n\n", media);
        }
    }
    while (cod != 0);
}
