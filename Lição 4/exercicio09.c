/*
    Fazer um programa que leia tr�s valores reais: X, Y e Z,
    correspondentes aos lados de um tri�ngulo.
    Com isso, execute as seguintes verifica��es:
        a. Verificar se X, Y e Z podem ser os comprimentos dos lados de um tri�ngulo;
        b. Em caso positivo, verificar se � um tri�ngulo eq�il�tero, is�sceles ou escaleno.
        c. Em caso negativo, escrever uma mensagem.
    Dica: O comprimento de cada lado de um tri�ngulo � menor do que a soma dos comprimentos
    dos outros dois lados.
 */
#include<stdio.h>

int main() {
    int x, y, z;

    printf("Digite X, Y e Z: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < (y + z) && y < (x + z) && z < (x + y)) {
        // O triangulo eh valido
        if(x == y && x == z) {
            printf("Triangulo equilatero!");
        // Se todos os lados n�o s�o iguais, caso dois sejam o triangulo eh isosceles:
        } else if(x == y || y == z || z == x) {
            printf("Triangulo isosceles!");
        } else {
            printf("Triangulo escaleno!");
        }
    } else {
        printf("Lados do triangulo invalidos.");
    }
    getchar();
    return 0;
}
