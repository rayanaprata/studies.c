/* Escreva uma função chamada Carrega( ), que recebe como argumentos o ponteiro de um vetor de números inteiros e o seu tamanho.  
Nessa função solicite ao usuário a entrada na tela dos números e armazene-os no vetor.

Escreva uma função chamada Menor( ), que recebe como argumentos o ponteiro do vetor e o seu tamanho. 
Essa função deve percorrer o vetor e localizar o menor  valor armazenado nesse vetor e, a seguir, retorna o menor valor para onde foi feita a chamada.

    1. Escreva um programa que aceite uma série de valores do usuário na tela e os armazene em um vetor de inteiros, utilizando a função Carrega(). 
  A seguir o programa chama a função Menor( ), passando como argumentos o ponteiro do vetor e o seu tamanho. 
  A função localiza o menor valor armazenado no vetor e o retorna para onde foi feita a chamada, onde deverá ser impresso qual é o menor número informado no vetor.

** Variação: Você pode incluir também mais um parâmetro na função que procura o menor valor, para indicar se ela deve achar o MENOR ou o MAIOR valor. */
#include <stdio.h>
#include <locale.h>
void carrega( int *numeros, int tamVetor ){
	
	int i;
	
	for(i=0; i<tamVetor; i++){
		printf("\n %d - Insira um número: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
}
int menor( int *numeros, int tamVetor ){
	
	int i, mnr;
	
	mnr = numeros[0];
	
	for(i=1; i<tamVetor; i++){
		
		if(numeros[i] < mnr){
			mnr = numeros[i];
		}
		
	}
	
	return mnr;
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int tamanho=10;
	int mnr;
	
	printf("Preencha o vetor de 10 posições: \n");
	carrega(vetor, tamanho);
	printf("\n----------\n\nNúmeros armazenados com sucesso!\n\n----------\n");
	mnr = menor(vetor, tamanho);
	printf("\nO menor número informado no vetor foi %d. \n", mnr);
	
	
	
	return 0;
}

-----

         :::::::::::::::::::: VARIANDO :::::::::::::::::::: 

/* Escreva uma função chamada Carrega( ), que recebe como argumentos o ponteiro de um vetor de números inteiros e o seu tamanho.  
Nessa função solicite ao usuário a entrada na tela dos números e armazene-os no vetor.

Escreva uma função chamada Menor( ), que recebe como argumentos o ponteiro do vetor e o seu tamanho. 
Essa função deve percorrer o vetor e localizar o menor  valor armazenado nesse vetor e, a seguir, retorna o menor valor para onde foi feita a chamada.

    1. Escreva um programa que aceite uma série de valores do usuário na tela e os armazene em um vetor de inteiros, utilizando a função Carrega(). 
  A seguir o programa chama a função Menor( ), passando como argumentos o ponteiro do vetor e o seu tamanho. 
  A função localiza o menor valor armazenado no vetor e o retorna para onde foi feita a chamada, onde deverá ser impresso qual é o menor número informado no vetor.

** Variação: Você pode incluir também mais um parâmetro na função que procura o menor valor, para indicar se ela deve achar o MENOR ou o MAIOR valor. */
#include <stdio.h>
#include <locale.h>
void carrega( int *numeros, int tamVetor ){
	
	int i;
	
	for(i=0; i<tamVetor; i++){
		printf(" %d - Insira um número: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
}
int menor( int *numeros, int tamVetor ){
	
	int i, mnr;
	
	mnr = numeros[0];
	
	for(i=1; i<tamVetor; i++){
		
		if(numeros[i] < mnr){
			mnr = numeros[i];
		}
		
	}
	
	return mnr;
	
}
int maior( int *numeros, int tamVetor ){
	
	int i, mor;
	
	mor = numeros[0];
	
	for(i=1; i<tamVetor; i++){
		
		if(numeros[i] > mor){
			mor = numeros[i];
		}
		
	}
	
	return mor;
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int tamanho=10;
	int mnr;
	int mor;
	int controle;
	
	do{
		
	
		printf("\n :::::::::: Bem vindo! :::::::::: \n\n");
		
		printf(" Preencha o vetor de 10 posições: \n\n");
		carrega(vetor, tamanho);
		printf("\n----------\n\nNúmeros armazenados com sucesso!\n\n----------\n");
		
		printf("\n\nSelecione: \n\n 0 - Para descobrir o MENOR valor do vetor \n\n 1 - Para descobrir o MAIOR valor do vetor \n\n Digite qualquer outra coisa para sair");
		printf("\n\nOpção desejada: ");
		scanf("%d", &controle);
		
		if(controle == 1){
			
			mor = maior(vetor, tamanho);
			printf("\n---\n\n O MAIOR número informado no vetor foi %d. \n\n---\n", mor);
			
		} else if (controle == 0){
			
			mnr = menor(vetor, tamanho);
			printf("\n---\n\n O MENOR número informado no vetor foi %d. \n\n---\n", mnr);
			
		} else {
			
			printf("\n\n---\n\n Obrigada por utilizar nosso sistema, volte sempre! \n\n---\n");
			
		}
		
	} while(controle == 0 ||controle == 1);

	return 0;
}

------

/* 2. Faça um programa que contém 3 vetores de inteiros. Utilizando funções, solicite na tela os números para preencher 2 destes vetores. 

Crie uma função que recebe os ponteiros dos 3 vetores, percorre os 2 vetores que estão preenchidos, 
e preenche o vetor 3 somente com os números que aparecem simultaneamente nos dois vetores que foram preenchidos na tela. 

Ao retornar dessa função, imprima na tela o conteúdo do vetor 3.
*/

#include <stdio.h>
#include <locale.h>
void carrega( int *numeros, int tamVetor ){
	
	int i;
	
	for(i=0; i<tamVetor; i++){
		printf("%d - Insira um número: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
}
void repetidos( int *vetUm, int *vetDois, int *vetTres, int tam, int *cont){
	
	int i, j;
	int k=0;
	
	for(i=0; i<tam; i++){
		
		for(j=0; j<tam; j++){
			
			if (vetUm[i] == vetDois[j]){
				vetTres[k] = vetDois[j];
				k++;
			}
			
		}
		
	}
	
	*cont = k;
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetorUm[10];
	int vetorDois[10];
	int vetorTres[10];
	int tamanho=10;
	int i;
	int cont;

	printf("Preencha o PRIMEIRO vetor de 10 posições: \n\n");
	carrega(vetorUm, tamanho);
	printf("\nNúmeros armazenados com sucesso!\n\n---\n\n");
	
	printf("Preencha o SEGUNDO vetor de 10 posições: \n\n");
	carrega(vetorDois, tamanho);
	printf("\nNúmeros armazenados com sucesso!\n\n---\n\n");
	
	repetidos(vetorUm, vetorDois, vetorTres, tamanho, &cont);
	
	printf("\nConteúdo do vetor 3: \n");
	for(i=0; i<cont; i++){
		printf(" %d ", vetorTres[i]);
	}
	
	
	return 0;
}


-----

/* 3. Você deve solicitar na tela um número inicial e outro para ser somado, até que o total da soma seja maior que 100. 
Na função main , imprima o resultado a cada soma que for realizada. Detalhe: você NÃO poderá utilizar o símbolo “+” dentro do main. 
Crie uma Função para realizar a soma que deverá receber os dois numeros na forma de ponteiros. */
	
#include <stdio.h>
#include <locale.h>
int somando( int *ini, int *som ){
	
	int total=0;
	
	while (total < 100){
		total = *ini + *som;
		printf("\n%d + %d = %d \n", *ini, *som, total);
		*ini = total;
	}
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int inicial, soma;
	
	printf("Insira o valor inicial: ");
	scanf("%d", &inicial);
	
	printf("Insira um número que será somado ao valor inicial: ");
	scanf("%d", &soma);
	
	somando(&inicial, &soma);

	return 0;
}
