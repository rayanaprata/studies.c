/* Faça a leitura na tela da hora e minutos de entrada de um trabalhador em serviço, e da hora e minutos de sua saída. 
Calcule e imprima na tela o tempo que foi trabalhado. */

#include <stdio.h>
int main () {
	
	int horaE, minutoE, horaS, minutoS, entrada, saida, tempo, horaT, minutoT;
	
	printf("\nInsira a hora da entrada: ");
	scanf("%d", &horaE);
	
	printf("\nInsira os minutos da entrada: ");
	scanf("%d", &minutoE);
	
	printf("\nInsira a hora da saída: ");
	scanf("%d", &horaS);
	
	printf("\nInsira os minutos da saída: ");
	scanf("%d", &minutoS);
	
	entrada = (horaE * 60) + minutoE;
	saida = (horaS * 60) + minutoS;
	
	tempo = saida - entrada;
	
	horaT = tempo/60;
	minutoT = tempo%60;
	
	if (horaT < 0){
		horaT = horaT * -1;
	}
	
	if (minutoT < 0){
		minutoT = minutoT * -1;
	}

	printf("\nTempo trabalhado = %dh%dmin \n", horaT, minutoT);
	
	return 0;
}
