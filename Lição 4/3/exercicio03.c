/*
    Implemente um programa que calcule o produto de
    2 número inteiros X e Y. Além disso, seu algoritmo
    OBRIGATORIAMENTE não deve utilizar operador de
    multiplicação (*).
 */

#include<stdio.h>

int main() {
    int x, y, i, produto = 0;

    printf("Digite X e Y: ");
    scanf("%d %d", &x, &y);

    for(i = 1; i <= x; i++) {
        produto += y;
    }

    printf("%dx%d=%d", x, y, produto);

    getchar();
    return 0;
}
