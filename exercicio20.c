/*
    Escreva um programa para ler o n�mero de lados de um
    pol�gono regular e a medida dos lados (em cm).
    Calcule e mostre:

    Se o n�mero de lados for igual a 3 escrever TRIANGULO
    e o valor do seu per�metro;
    Se o n�mero de lados for igual a 4 escrever QUADRADO
    e o valor da sua �rea;
    Se o n�mero de lados for igual a 5 escrever PENTAGONO.
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
