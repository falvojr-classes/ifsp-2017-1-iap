/**
 * Fazer um programa que leia os valores reais A, B e C e realize nos mesmos as seguintes
 * regras:
 * 1 - Apresentar A, B e C em ordem crescente.
 * 2 - Apresentar A, B e C em ordem decrescente.
 * Qualquer Outra - Apresentar A, B e C na ordem em que foram digitados.
**/

#include<stdio.h>

int main() {
	int opcao, a, b, c;

	printf("Digite a opção desejada: ");
	scanf("%d", &opcao);

	printf("Digite os valores de A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);

	switch(opcao) {
		case 1:
		case 2:
			if (a > b && b > c) {
				if (opcao == 1) {
					printf("%d %d %d", c, b, a);
				} else {
					printf("%d %d %d", a, b, c);
				}
			} else if (a > c && c > b) {
				if (opcao == 1) {
					printf("%d %d %d", b, c, a);
				} else {
					printf("%d %d %d", a, c, b);
				}
			} else if (b > a && a > c) {
				if (opcao == 1) {
					printf("%d %d %d", c, a, b);
				} else {
					printf("%d %d %d", b, a, c);
				}
			} else if (b > c && c > a) {
				if (opcao == 1) {
					printf("%d %d %d", a, c, b);
				} else {
					printf("%d %d %d", b, c, a);
				}
			} else if (c > a && a > b) {
				if (opcao == 1) {
					printf("%d %d %d", b, a, c);
				} else {
					printf("%d %d %d", c, a, b);
				}
			} else if (c > b && b > a) {
				if (opcao == 1) {
					printf("%d %d %d", a, b, c);
				} else {
					printf("%d %d %d", c, b, a);
				}
			} else {
				printf("%d %d %d", a, b, c);
			}
			break;
		default:
			printf("%d %d %d", a, b, c);
			break;
	}

	getchar();
	return 0;
}
