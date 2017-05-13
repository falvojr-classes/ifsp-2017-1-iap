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
    int numero, divisores, opcao, contador, i;

    numero = 2;

    do {
        divisores = 0;
        for(i=1; i <= numero; i++) {
            if(numero%i == 0) {
                divisores++;
                if(divisores > 2) {
                    break;
                }
            }
        }

        if(divisores == 2) {
            contador++;
            printf("%dº numero Primo: %d\n", contador, numero);
            printf("Pressione S para continuar: ");
            scanf("%s", &opcao);
        }
        numero++;
    }
    while(toupper(opcao) == 'S');

    getchar();
    return 0;
}
