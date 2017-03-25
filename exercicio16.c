/*
    Suponha que inicialmente x tem o valor 3 e y o valor 10.
    Qual o valor das variáveis x e y após a execução das
    seguintes instruções:
 */
#include<stdio.h>

int main() {
    int x, y;

    x = 3;
    y = 10;

    x=x+y;
    x=x+x;
    x=y; x=3;
    x=x*x; x=x+x;
    y=x; x=y;
    y+=x++;
    y-=++x;

    printf("X=%d e Y=%d", x, y);

    getchar();
    return 0;
}
