Criar agora uma função que recebe o vetor com as notas e um ponteiro para a média do aluno. Enviar para esta função o vetor preenchido, calcular a média do aluno no ponteiro da média, e imprimir a média do aluno na função "main"*/

#include<stdio.h>
#include<locale.h>
//criando/definindo uma constante Chamada: 'TAMANHO' que Vale: '4' 
#define TAMANHO 4
void buscaNome(char *texto, char *nome){
	
	printf("\n %s", texto);
	scanf(" %s", nome);
	//não precisa do & pois é char!!!
	
}
void buscaNmr(char *texto, int *nmr){
	
	printf(" %s", texto);
	scanf("%d", nmr);
	
}
void buscaVetor(char *texto, int *pt){
	
	int i;
	
	printf("\n");
	
	for(i=0; i<TAMANHO; i++){
		printf(" %d - %s", i+1, texto);
		scanf("%d", &pt[i]);
	}
	
}
void imprimeVetor(char *texto, int *pt){
	
	int i;
	
	printf("\n\n %s", texto);
	
	for(i=0; i<TAMANHO; i++){
		printf("\n Nota %d: %d ", i+1, pt[i]);
	}
	
}
void calculaMedia(int *pt, int *med){
	
	int i, soma=0;
	
	for(i=0; i<TAMANHO; i++){
		soma = pt[i] + soma;
	}
	
	*med = soma/TAMANHO;
	
}
void verificaResultado(char *texto, int *med){
	
	if(med>=7){
		printf("%s Aprovado!", texto);
	}else{
		printf("%s Reprovado!", texto);
	}
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAMANHO];
	int var=0;
	char nome[20];
	int media;
	
	printf("\n :: Bem vindo! Utilize o sistema para calcular notas. :: \n\n");
	
	//não precisa mandar com o & pois é char!!!
	buscaNome("Informe o nome do aluno: ", nome);
	
	buscaNmr("Informe a idade do aluno: ", &var);
	
	buscaVetor("Insira a nota: ", vetor);
	
	calculaMedia(vetor, &media);
	
	printf("\n ---------- \n\n :: Informações do aluno :: ");
	
	printf("\n\n Nome: %s \n Idade: %d anos", nome, var);
	
	imprimeVetor("Notas do Aluno: ", vetor);
	
	printf("\n\n Média de %s: %d", nome, media);
	
	verificaResultado("\n\n Resultado:", &media);
	
	return 0;
}
