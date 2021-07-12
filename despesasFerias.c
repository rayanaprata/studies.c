/* 2 - Jonas vai fazer uma viagem de férias e precisa calcular suas despesas. 
Crie um programa onde ele informará o valor total disponível para viajar, o valor da passagem e o número de dias da viagem. 

O programa deverá calcular o valor que sobrou depois de pagar a passagem, e mostrar quanto ele poderá gastar por dia, 
sendo que 40% deve ser destinado a hospedagem e o restante para o lazer. Imprima na tela os valores disponíveis para cada atividade. */

#include <stdio.h>
int main () {
	
	int dias;
	float total, passagem, sobras, hospedagem, lazer;
	
	printf("Insira o valor disponível para a viagem: ");
	scanf("%f", &total);
	
	printf("Insira o valor da passagem: ");
	scanf("%f", &passagem);
	
	printf("Insira o número de dias da viagem: ");
	scanf("%d", &dias);
	
	sobras = total - passagem;
	hospedagem = sobras * 0.4;
	lazer = sobras * 0.6;
	
	hospedagem = hospedagem / dias;
	lazer = lazer / dias;
	
	printf("Sobrou %.2f reais, podem ser gastos %.2f reais por dia com hospedagem e %.2f reais por dia com lazer.", sobras, hospedagem, lazer);

return 0;
}
