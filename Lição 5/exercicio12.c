/**
 * Altere o exercício anterior para que sejam feitas as leituras
 * de apenas 10 valores do sensor TM35. Além disso, realize a
 * média de temperatura dos valores lidos, desconsiderando o
 * maior e o menor valor.
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

int main( ) {
    int tm35[10], i, maior, menor;
    float celsius, media;

    media = 0;
    maior = 0;    // O maior é inicializado com o menor valor possível
    menor = 1023; // O menor é inicializado com o maior valor possível

    for(i = 0; i < 10; i++) {
        scanf("%d", &tm35[i]);
        // Cria uma variável auxiliar
        int valorAtual = tm35[i];
        // Acumula o valor atual na média
        media += valorAtual;
        // Verifica o maior valor
        if(valorAtual > maior) {
            maior = valorAtual;
        }
        // Verifica o menor valor
        if(valorAtual < menor) {
            menor = valorAtual;
        }
    }

    media = media - maior - menor;
    media /= 8;

    celsius = (media * (5000/1023.0))/10;
    printf("%.5f Celsius\n\n", celsius);
    if(celsius > 37.8) {
        //TODO Apagar a luz!
    } else {
        //TODO Acender a luz!
    }

    getchar();
    return 0;
}
