/**
 * 3. Construir um programa que encontre o maior, menor
 * e quantidade de elementos maiores que 500, a partir
 * dos seguintes elementos:
 *
 * { 250.00, 150.00, 550.00, 775.00, 600.00, 450.00 }
**/

#include<stdio.h>

int main() {
    int i, qtdMaior500;
    float maior, menor;
    float numeros[6] = { 250.00, 150.00, 550.00, 775.00, 600.00, 450.00 };

    // Inicializa as vairaveis para evitar problemas e condicoes adicionais
    qtdMaior500 = 0;
    maior = numeros[0];
    menor = numeros[0];

    for(i=0; i < 6; i++) {
        float valor = numeros[i];

        if(valor > 500) {
            qtdMaior500++;
        }
        if(valor > maior) {
            maior = valor;
        }
        if(valor < menor) {
            menor = valor;
        }
    }

    printf("Quantidade de elementos maior que 500: %d\n", qtdMaior500);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n\n", menor);


    getchar();
    return 0;
}
