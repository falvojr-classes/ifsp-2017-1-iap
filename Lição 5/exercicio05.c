/**
 * 5. Crie um programa que defina e imprima a seguinte matriz:
 *
 * {
 *   { 'I', 'F', 'S', 'P' },
 *   { '2', '0', '1', '6' }
 * }
 */

#include<stdio.h>

int main()
{
    int i, j;
    char matriz[2][4] =
    {
        { 'I', 'F', 'S', 'P' },
        { '2', '0', '1', '6' }
    };

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
