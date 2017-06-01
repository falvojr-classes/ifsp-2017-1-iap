/**
 * Faça um programa em linguagem C que escreva a
 * tabuada dos números de 1 a 10.
 */

#include<stdio.h>

#define LIMITE 100

int main() {
    int i, j;

    for(i = 1; i <= LIMITE; i++) {
        for(j = 0; j <= 10; j++) {
            printf("%dx%d=%d\n", i, j, i * j);
        }
        printf("\n");
    }
}
