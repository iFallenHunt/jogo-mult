#include <stdio.h>
#include <locale.h>

int main () {
	int numero, i;


	printf("-----------------------\n");
	printf("Digite um numero: ", numero);
	scanf("%d", &numero);
	printf("-----------------------\n");

	printf("\n--------------------------\n");
	printf("O numero antecessor e: %d\n", numero -1);
	printf("O numero sucessor e: %d\n", numero +1);
	printf("----------------------------\n");

	printf("\n------------------------------\n");
	for (i = 1; i < 11; i++) {
		printf("A tabuada de %d x %d e: %d\n", numero, i,i * numero);
	}
	printf("------------------------------\n");
}
