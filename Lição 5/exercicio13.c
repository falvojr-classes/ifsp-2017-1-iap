/**
 * Altere o exercício anterior utilizando o Bubble Sort para melhorar sua lógica.
 */

#include <stdio.h>  // Biblioteca dos comandos de E/S (I/O)

void bubbleSort(int arr[], int n) {
    int houveTroca = 1;
    int j = 0;
    int tmp;
    while (houveTroca == 1) {
        houveTroca = 0;
        j++;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                houveTroca = 1;
            }
        }
    }
}

int main( ) {
    int tm35[10], i;
    float celsius, media;

    media = 0;
    for(i = 0; i < 10; i++) {
        scanf("%d", &tm35[i]);
    }

    bubbleSort(tm35, 10);

    for(i = 1; i < 9; i++) {
      media += tm35[i];
    }

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

