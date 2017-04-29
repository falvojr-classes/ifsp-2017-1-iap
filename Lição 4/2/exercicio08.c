/*
    Fazer um programa em Linguagem C que leia três valores inteiros: A, B e C.
    Após a leitura destes dados imprima-os em ordem decrescente.
    Considere que os três valores são distintos.
 */
#include<stdio.h>

int main() {
    int a, b, c;

    printf("Digite A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) {
        // A é o maior!
        if(b > c) {
            printf("%d>%d>%d", a, b, c);
        } else {
            printf("%d>%d>%d", a, c, b);
        }
    } else if(b > a && b > c) {
        // B é o maior!
        if(a > c) {
            printf("%d>%d>%d", b, a, c);
        } else {
            printf("%d>%d>%d", b, c, a);
        }
    } else {
        // C é o maior!
        if(a > b) {
            printf("%d>%d>%d", c, a, b);
        } else {
            printf("%d>%d>%d", c, b, a);
        }
    }
    getchar();
    return 0;
}
