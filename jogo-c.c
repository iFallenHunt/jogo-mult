#include <stdio.h>
#include <locale.h>

int main () {
	int numero, i;

	while (numero != 0){
		do{
			printf("---------------------------------\n");
			printf(" Bem-Vindo ao jogo da Matematica \n");
			printf("---------------------------------\n");
			printf("\n");
			printf("------- Digite um Numero! -------\n");
			scanf("%d", &numero);
			printf("\n");

			printf("----- Tabuada do Numero: %d ------\n", numero);
			for (i = 1; i < 11; i++) {
				printf("           %d x %d e: %d\n", numero, i,i * numero);
		}
		printf("\n");
	
		printf("---- O Antecessor de: %d eh: %d ----\n", numero-1 );
		printf("----- O Sucessor de: %d eh: %d -----\n", numero+1 );
		}
	while (numero!=0);
			printf("\n------- Digite um Numero! -------\n");
			scanf("%d", &numero);
	}
}
