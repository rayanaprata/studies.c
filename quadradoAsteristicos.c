/* Escreva um programa que lê o tamanho do lado de um quadrado. Utilizando o comando FOR, imprima na tela um quadrado daquele tamanho, preenchido com asteriscos. 
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20. */

#include <stdio.h>
int main () {

	int tamanho, i, j;
	
	printf("Insira o tamanho do quadrado: ");
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
