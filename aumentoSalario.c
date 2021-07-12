/* Faça a leitura do salário de um trabalhador e o percentual de aumento que ele irá receber. 
Calcule e mostre o valor do aumento e o valor do novo salário. */

#include <stdio.h>
int main () {
	
	float salarioAtual, percentual, novoSalario;
	
	printf("Insira o salário atual: ");
	scanf("%f", &salarioAtual);
	
	printf("Insira o percentual de aumento: ");
	scanf("%f", &percentual);
	
	percentual = percentual/100;
	novoSalario = (salarioAtual * percentual) + salarioAtual;
	
	printf("Salário com aumento: %f", novoSalario);
	
	return 0;
}
