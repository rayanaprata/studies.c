/*Desenvolva um Menu de opções, utilizando o
comando de seleção SWITCH, utilizando as
opções: Somar, Subtrair, Multiplicar, Dividir e
Sair. Solicite a entrada de dois números na tela,
e conforme a opção, execute a operação
escolhida, imprimindo o resultado na tela.
Encerre o programa com a escolha da opção
Sair. */

#include <stdio.h>
int main () {

	int opcao, v1, v2, resultado;
	
	printf("Insira a opção desejada: \n   1 - Somar\n   2 - Subtrair\n   3 - Multiplicar\n   4 - Dividir\n   5 - Sair\n");
	scanf("%d", &opcao);
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Insira o segundo valor: ");
	scanf("%d\n", &v2);
	
	switch(opcao){
	case 1:
		resultado = v1 + v2;
		printf("\n%d + %d = %d", v1, v2, resultado);
		break;
	case 2:
		resultado = v1 - v2;
		printf("\n%d - %d = %d", v1, v2, resultado);
		break;
	case 3:
		resultado = v1 * v2;
		printf("\n%d x %d = %d", v1, v2, resultado);
		break;
	case 4:
		resultado = v1 / v2;
		printf("\n%d / %d = %d", resultado);
		break;
	case 5:
		break;
	default:
		printf("Valor invalido.");
		break;	
	}
	
	return 0;
}
