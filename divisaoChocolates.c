/* 1- Estela viajou para França e trouxe diversos chocolates para dividir entre os seus 4 filhos. 
Para evitar possíveis brigas, os chocolates deverão ser divididos em partes iguais entre seus filhos. 
O restante dos chocolates ficará com Estela. 
Desenvolva um algoritmo que ajude Estela a calcular quantos chocolates dará a cada filho e quantos deverão ficar para ela, 
imprimindo na tela o resultado (os chocolates não podem ser fracionados). */

#include <stdio.h>
int main () {

	int chocolates, estela, filhos;

	printf("Insira a quantidade de chocolates: ");
	scanf("%d", &chocolates);

	filhos = chocolates / 4;
	estela = chocolates % 4;

	printf("Dentre os %d chocolates que Estela trouxe da França cada filho receberá %d chocolates e Estela ficará com %d.", chocolates, filhos, estela);

	return 0;
}
