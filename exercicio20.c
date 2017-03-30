/*
    Escreva um programa para ler o número de lados de um
    polígono regular e a medida dos lados (em cm).
    Calcule e mostre:

    Se o número de lados for igual a 3 escrever TRIANGULO
    e o valor do seu perímetro;
    Se o número de lados for igual a 4 escrever QUADRADO
    e o valor da sua área;
    Se o número de lados for igual a 5 escrever PENTAGONO.
 */
#include<stdio.h>

int main() {
    int lados;
    float medidaLados;

    printf("Digite a quantidade de lados: ");
    scanf("%d", &lados);
    printf("Digite a medida dos lados: ");
    scanf("%f", &medidaLados);

    if(lados == 3) {
        printf("TRIANGULO\n");
        float perimetro = medidaLados * 3;
        printf("Perimetro %.2f", perimetro);
    }
    else if(lados == 4) {
        printf("QUADRADO\n");
        float area = medidaLados * medidaLados;
        printf("Area %.2f", area);
    }
    else if(lados == 5) {
        printf("PENTAGONO");
    }
    else {
        printf("INVALIDO!");
    }
}
