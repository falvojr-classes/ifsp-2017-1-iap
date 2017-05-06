/*
 * Fazer um programa em linguagem C para calcular e
 * mostrar a conversão de temperaturas em graus Celsius
 * para Fahrenheit (F = C * 1.8 + 32) de 50 a 300 graus
 * Celsius, de 3 em 3 graus.
 */
#include<stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    for(celsius=50; celsius <= 300; celsius+=3) {
        fahrenheit = celsius * 1.8 + 32;
        printf("%d C = %.2f F\n", celsius, fahrenheit);
    }
}
