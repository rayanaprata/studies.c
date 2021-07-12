/* Desenvolva um programa, utilizando o laço FOR, para calcular o salário de 3 funcionários.
Solicite na tela o nome e o salário dos funcionários. Para valores até 1.999,00 o aumento será de
10%. Para valores superiores o aumento será de 5%. A seguir solicite o percentual de Imposto de
reda. Aplique o desconto deste percentual no novo salário do funcionário. Imprima na tela o nome,
salário anterior, % de aumento , salário atual, valor desconto, salário líquido dos funcionários. */

#include <stdio.h>
int main () {

	int i;
	char nome[20];
	float salAnterior, aumento, salAtual, desconto, salLiquido;

	for (i=0; i<3; i++){
		printf("Insira o nome do funcionário %d: ", i);
		scanf("%s", nome);
		printf("Insira o salário do funcionário %d: ", i);
		scanf("%f", &salAnterior);
		
		if(salAnterior<1999.00){
			aumento = 0.1;
		} else {
			aumento = 0.05;
		}
		salAtual = salAnterior + (salAnterior*aumento);

		printf("Insira o percentual do Imposto de Renda: ");
		scanf("%f", &desconto);

		salLiquido = salAtual + (salAtual * desconto);

		printf(" ::::::::::\n\n Funcionário %d: %s \n Salário Anterior: %f \n Porcentagem de Aumento: %f \n Salário Atual: \n Valor Desconto: %f \n Salário Líquido: %f \n\n::::::::::", i, nome, salAnterior, aumento, salAtual, desconto, salLiquido);
		
	}

	return 0;
}
