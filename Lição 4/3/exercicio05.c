/*
    Faça um programa que desenhe as seguintes
    “figuras”:
 */
#include<stdio.h>

#define LINHAS 20

int main() {
    int i, j;

    for(i = 1; i <= LINHAS; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    for(i = LINHAS; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
