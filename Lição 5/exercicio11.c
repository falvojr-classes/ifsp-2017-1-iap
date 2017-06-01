/**
 * Faça um programa que leia o valor de um sensor de temperatura TM35, que
 * varia de 0 a 1023, onde 0 corresponde a 0 Volts e 1023 corresponde a 5 Volts.
 * Além disso, sabemos que 1ºC é igual a 10mV. Com isso, podemos considerar a
 * seguinte equação:
 *
 * Formula Simplificada:
 * Temperatura em ºC = TM35 * 0.488758
 *
 * Formula Formal:
 * Temperatura em ºC = (TM35 * (5V/1023)) / 10mV
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

int main( ) {
    int tm35;
    float celsius;

    for(;;) {
        scanf("%d", &tm35);
        celsius = (tm35 * (5000/1023.0))/10;
        printf("%.5f Celsius\n\n", celsius);
        if(celsius > 37.8) {
            //TODO Apagar a luz!
        } else {
            //TODO Acender a luz!
        }
    }

    getchar();
    return 0;
}
