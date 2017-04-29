/*
    Faça um programa que verifique e mostre
    a soma dos 50 primeiros numeros pares.
 */

#include<stdio.h>

#define LIMITE_PARES 50

int main() {
   int soma = 0, qtdPares = 0, i;

   for(i = 1; qtdPares < LIMITE_PARES; i++) {
        if(i%2 == 0) {
            qtdPares++;
            soma += i;
        }
   }

   printf("Soma: %d", soma);
}
