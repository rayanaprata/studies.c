#include <stdio.h>
int main () {
	
	char nome[20];
	int matricula;
	float n1, n2, n3, n4, media;
	
	printf("Insira o nome do aluno: ");
	scanf("%s", &nome);
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
		
	printf("Insira a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Insira a quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/ 4;
		
	printf("A media de %s = %.2f ", nome, media);
	
	return 0;
}
