/* Declare uma Matriz 3 x 3. Solicite um número na tela.
Preencha todos os campos da matriz da seguinte forma:
Matriz [x][y] = numero anterior + 2
Iniciar com o número informado na tela.
Ao final, realizar a soma de todas as posições da matriz
e imprimir o valor total. */

#include <stdio.h>
int main () {

	int num, i, j, soma=0, matriz[3][3];

	printf("Insira um número: ");
	scanf("%d", &num);

	num = num - 2;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j] = num + 2;
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			soma = soma + matriz [i][j];
		}
	}
	
	printf("Valor total = %d", soma);

	return 0;
}
