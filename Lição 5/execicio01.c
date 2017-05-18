/*
 * Implementar um programa que imprima a soma do seguinte vetor:
 * { 1.35, 5.00, 9.65, 6.10, 3.33, 8.75 }
 */
#include<stdio.h>

int main() {
    int i;
    float numeros[6] = { 1.35, 5.00, 9.65, 6.10, 3.33, 8.75 };
    float soma = 0;

    for(i = 0; i < 6; i++) {
        soma += numeros[i];
        printf("%.2f\n", soma);
    }

}
