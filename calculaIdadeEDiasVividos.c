/* Faça a leitura na tela do nome de uma pessoa, e do seu dia, mês e ano de nascimento. 
Calcule quantos anos a pessoa possui e quantos dias ela já viveu. Imprima o resultado na tela. */

#include <stdio.h>
int main () {
	
	char nome[20];
	int dia, mes, ano, diaA, mesA, anoA, idade, vividos;
	
	printf("\nInsira seu nome: ");
	scanf("%s", nome);
	
	printf("\nInsira o seu dia de nascimento: ");
	scanf("%d", &dia);
	
	printf("\nInsira o seu mês de nascimento: ");
	scanf("%d", &mes);
	
	printf("\nInsira o seu ano de nascimento: ");
	scanf("%d", &ano);
	
	printf("\nInsira o dia atual: ");
	scanf("%d", &diaA);
	
	printf("\nInsira o mês atual: ");
	scanf("%d", &mesA);
	
	printf("\nInsira o ano atual: ");
	scanf("%d", &anoA);
	
	if (diaA >= dia && mesA >= mes){
		idade = anoA - ano;		
	} else {
		idade = (anoA - 1) - ano;		
	}
	
	vividos = ( 365*(idade-1) ) + diaA + ((mesA - 1) * 30) ;
		
	printf("\nNome: %s \nNascimento: %d/%d/%d \nIdade: %d \nDias vividos: em média %d dias", nome, dia, mes, ano, idade, vividos);
	
	return 0;
}

