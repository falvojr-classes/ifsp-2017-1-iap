/**
 * 3. Elaborar um codigo que efetue a leitura sucessiva de valores numericos e apresente no
 * final o total do somatorio, a media e o total de valores lidos. O programa deve fazer as
 * leituras dos valores enquanto o usuario estiver fornecendo valores positivos. Calcular
 * tambem:
 *
 * a. Quantidade de valores menores que 50;
 * b. Porcentagem de valores menores que 50;
 * c. O maior valor lido;
 * d. O menor valor lido.
**/

#include<stdio.h>

int main(){

	float numero, soma, contador, menores50, maior, menor;

	soma = 0;
	contador = 0;
	menores50 = 0;
	menor = 0;
	maior = 0;

	while(numero >= 0) {
		printf("Digite um numero:");
		scanf("%f", &numero);

		if(numero >= 0)	{
            contador++;
            soma += numero;

            if(numero < 50) {
                menores50++;
            }
            if(contador == 1 || numero > maior) {
                maior = numero;
            }
            if(contador == 1 || numero < menor) {
                menor = numero;
            }
		}
	}

	printf("\nSomatorio: %.2f", soma);
	printf("\nMedia: %.2f", soma/contador);
	printf("\nTotal de valores lidos: %.0f", contador);
	printf("\nItem A: %.0f", menores50);
	printf("\nItem B: %.2f", menores50/contador*100);
	printf("\nItem C: %.2f", maior);
	printf("\nItem D: %.2f\n", menor);

	getchar();
	return 0;
}
