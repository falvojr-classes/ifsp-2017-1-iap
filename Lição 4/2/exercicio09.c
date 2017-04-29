/*
    Fazer um programa que leia três valores reais: X, Y e Z,
    correspondentes aos lados de um triângulo.
    Com isso, execute as seguintes verificações:
        a. Verificar se X, Y e Z podem ser os comprimentos dos lados de um triângulo;
        b. Em caso positivo, verificar se é um triângulo eqüilátero, isósceles ou escaleno.
        c. Em caso negativo, escrever uma mensagem.
    Dica: O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos
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
        // Se todos os lados não são iguais, caso dois sejam o triangulo eh isosceles:
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
