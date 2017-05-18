/**
 * 16. Implemente uma variação do exercício anterior que encontre e
 * imprima o primeiro número primo e pergunte ao usuário se ele deseja
 * buscar o próximo. Caso ele digite ‘S’, seu programa deve identificar
 * o próximo primo, caso contrário seu programa termina.
 *
**/

#include<stdio.h>
#include<ctype.h>

int main()
{
    int numero, divisores, i, opcao;

    // Removemos as otimizacões do exercicio 14

    // Alternativa 1 (DO WHILE):
    numero = 2;
    do {
        divisores = 0;
        for(i=1; i <= numero; i++) {
            if(numero%i == 0) {
                divisores++;
            }
        }

        if(divisores == 2) {
            printf("Primo: %d\n", numero);
            // Usamos int devido a problemas com o char (compialdor)
            printf("Pressione 1 para continuar: ");
            scanf("%d", &opcao);
        }
        numero++;
    }
    while(opcao == 1);

    // Alternativa 2 (FOR):
    opcao = 1;
    for(numero = 2; opcao == 1; numero++) {
        divisores = 0;
        for(i=1; i <= numero; i++) {
            if(numero%i == 0) {
                divisores++;
            }
        }

        if(divisores == 2) {
            printf("Primo: %d\n", numero);
            // Usamos int devido a problemas com o char (compialdor)
            printf("Pressione 1 para continuar: ");
            scanf("%d", &opcao);
        }
    }

    getchar();
    return 0;
}
