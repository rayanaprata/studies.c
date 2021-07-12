/*

	Utilizando a palavra reservada "struct" declarar uma estrutura que irá conter livros. 
	Os campos da estrutura são: título, ano de edição, número de páginas, autor e preço.
	
	Declarar um vetor de livros, de tamanho máximo = 5.
	     
	
	Criar um Menu com as seguintes opções:
	
	0-Sair
	1-Cadastro
	2-Relatório

	> A opção 1 deve solicitar os dados de 1 livro de cada vez. 
	Para isso deverá receber como parâmetros o vetor de livros (ponteiro) e um contador (ponteiro). 
	O contador vai indicar qual a próxima posição livre no vetor de livros para incluir um novo livro. 
	A cada cadastro de livro o contador será incrementado. Quando chegar ao limite de livros, informar com uma mensagem.
	
	> A opção 2 deverá receber o vetor de livros (ponteiro), listar os títulos dos livros cadastrados, e ao final, 
	imprimir a média do número de páginas dos livros, o maior livro, e o mais caro de todos.

** As posições do vetor que não tiverem sido cadastradas deverão ser desconsideradas dos cálculos.

	COMPLEMENTO 1:
	
	Declarar uma estrutura de Autores de livros com os seguintes campos: Código do Autor, Nome do Autor e Gênero. 
	Incluir uma nova opção de Menu: Cadastro Autores
	A opção de Cadastro do Autor  funciona da mesma forma que para os Livros.
	      
	
	COMPLEMENTO 2:
	
	Criar uma opção de menu para: Consulta Gênero,  que solicita o nome de um gênero na tela e imprime uma lista de todos os livros daquele gênero.

*/

#include <stdio.h>
#include <locale.h>
//Como o Struct é escrito fora do main ele é visível de todos os lugares, como uma variável "global"
struct livros {
	
	char titulo[50];
	int anoEdicao;
	int numPaginas;
	char autor[50];
	float preco;
	
};
struct autores {
	
	int codAutor;
	char nomeAutor[50];
	char genero[50];
	
};
void opcao1 (struct livros *outroLivro, int *cont ){
	
	printf("\n-------------------------------------\n\n");
	
	printf("Insira o título do livro: ");
	fflush(stdin);
	gets(outroLivro[*cont].titulo);	
	
	printf("Insira o ano de edição: ");
	scanf("%d", &outroLivro[*cont].anoEdicao);
	
	printf("Insira o número de páginas: ");
	scanf("%d", &outroLivro[*cont].numPaginas);
	
	printf("Insira o autor do livro: ");
	fflush(stdin);
	gets(outroLivro[*cont].autor);
	
	printf("Insira o preço do livro: ");
	scanf("%f", &outroLivro[*cont].preco);

	printf("\n-------------------------------------\n");
	
	*cont = *cont + 1;
	
}
void opcao2 (struct livros *outroLivro, int *cont ){
	
	int i;
	int total=0;
	int mediaPaginas=0;
	int maisPaginas=0;
	int aux=0;
	float maisCaro=0;
	
	printf("\nLivros cadastrados: \n");
	
	for(i=0; i<*cont; i++){
		printf("%d - %s \n", i+1, outroLivro[i].titulo);
	}
	
	maisPaginas = outroLivro[0].numPaginas;
	for(i=0; i<*cont; i++){
		
		if(maisPaginas <= outroLivro[i].numPaginas){
			
			maisPaginas = outroLivro[i].numPaginas;
			aux = i;
		}
		
		total = outroLivro[i].numPaginas + total;
		
	}
	
	mediaPaginas = total / *cont;
	
	printf("\nA média do número de páginas de todos os livros é: %d \n", mediaPaginas);
	
	printf("O maior livro (que tem mais páginas) é o %s, com %d páginas. \n", outroLivro[aux].titulo, outroLivro[aux].numPaginas);
	
	maisCaro = outroLivro[0].preco;
	for(i=0; i<*cont; i++){
		
		if(maisCaro <= outroLivro[i].preco){
			maisCaro = outroLivro[i].preco;
			aux = 1;
		}
		
	}
	
	printf("O livro mais caro de todos é o %s que custa %.2f \n", outroLivro[aux].titulo, maisCaro);
	
}
void opcao3 (struct autores *outroAutor, int *contAut){
	
	printf("\n-------------------------------------\n\n");
	
	printf("Insira o Código do Autor: ");
	scanf("%d", &outroAutor[*contAut].codAutor);
	
	printf("Insira o nome do Autor: ");
	fflush(stdin);
	gets(outroAutor[*contAut].nomeAutor);
	
	printf("Insira o gênero: ");
	fflush(stdin);
	gets(outroAutor[*contAut].genero);
	
	printf("\n-------------------------------------\n\n");
	
	*contAut = *contAut + 1;
	
}
void opcao4 (struct livros *outroLivro, struct autores *outroAutor, int *contAut){
	
	int i;
	int j;
	int aux;
	
	for(i=0; i<*contAut; i++){
		for(j=0; j<*contAut; j++){
			
			aux = strcmp(outroLivro[i].autor, outroAutor[i].nomeAutor);
		
		if (aux == 0){
			printf("Livros do autor %s", outroAutor[i].nomeAutor);
			printf(" %s \n", outroLivro[i].titulo);
		}
		
		aux = 1;
			
		}
		
	}
	
}
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	struct livros vetorDeLivros[5];
	struct autores vetorDeAutores[10];
	int control = 0;
	int cont = 0;
	int contAut = 0;
	int jafoi = 0;
	int jafoiAutor = 0;
	
	printf("\n-----------------------------\n     BEM VINDO AO SISTEMA \n         DA LIVRARIA \n-----------------------------\n");
	
	do{
		
		printf("\n\n 0 - Sair   1 - Cadastro de Livro   2 - Relatório dos Livros   \n\n        3 - Cadastro de Autor   4 - Consulta de Gênero  \n\n");
		printf("Opção escolhida: ");
		scanf("%d", &control);
		
		switch (control){
			
			case 0:
				break;
				
			case 1:
				if(jafoi <= 5){
					opcao1(vetorDeLivros, &cont);
				} else {
					printf("Número máximo de livros cadastrados!");
				}
				jafoi++;
				break;
			
			case 2:
				if(jafoi >= 1){
					opcao2(vetorDeLivros, &cont);
				} else {
					printf("\n--------------------------------------------------------------\n Cadastre pelo menos um livro antes de realizar uma pesquisa! \n--------------------------------------------------------------\n");
				}
				break;
				
			case 3:
				if(jafoiAutor <= 5){
				opcao3(vetorDeAutores, &contAut);
				} else {
					printf("Número máximo de autores cadastrados!");
				}
				break;
				
			case 4:
				if(jafoi >= 1 && jafoiAutor >= 1){
					
					opcao4(vetorDeLivros, vetorDeAutores, &contAut);
					
				}else if(jafoi < 1){
					printf("Cadastre pelo menos um Livro!");
				}else if(jafoiAutor < 1){
					printf("Cadastre pelo menos um Autor!");
				}
				
			default:
				printf("Opção inválida.");
				break;
				
		}
		
	} while (control != 0);

	return 0;
}
