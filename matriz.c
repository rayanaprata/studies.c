/* Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos. */

#include<stdio.h>
int main () {

    int matriz[2][2], i, j, menor, linha;
    
    for(i = 0; i < 2; i++) {    	
    	for(j = 0; j < 2; j++) {
    		
    		printf("Insira o valor da posicao [%d][%d] de sua matriz: ", i, j);
    		scanf("%d", &matriz[i][j]);
    		
		  }    	
	  }
	
	  printf("\nMatriz: \n");
    
    for(i = 0; i < 2; i++) {    	
    	for(j = 0; j < 2; j++) {    		
    		printf("[%d]", matriz[i][j]);    		
		}
    
    	printf("\n");
	}
    
    menor = matriz[0][0];

    for(i = 0; i < 2; i++) {
        
        for(j = 0; j < 2; j++) {
        
            if(matriz[i][j] < menor) {            
                menor = matriz[i][j];
                linha = i;                
            }  
        }        
    }
    
    /* COMO FUNCIONA A CONDIÇÃO >> CASO <<

		switch(linha){

 			case 0:
 				printf("Na primeira linha (referencia: %d) esta o menor valor, que e: %d.", linha, menor);
    			break;
    			
    		case 1:
    			printf("Na segunda linha (referencia: %d) esta o menor valor, que e: %d.", linha, menor);
    			break;

		} */	
    
    switch(linha) {
    	
    	case 0:
    		printf("\nNa primeira linha (vetor/linha, ref: %d) esta o menor valor, que e: %d", linha, menor);
    		break;
    		
    	case 1:
    		printf("\nNa segunda linha (vetor/linha, ref: %d) esta o menor valor, que e: %d.", linha, menor);
    		break;    		
    	
	}

	return 0;

}
