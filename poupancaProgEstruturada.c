#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0;
	
	int dia=0;
	int diasaldo;
	int option=0;
	int flagdia=0;
	
	int diadeposito;
	int flagdiadeposito;
	int flagvalor;
	
	float dias[31];
	float total=0;	
	float saldototal=0;
	float valordeposito=0;
	float saldodia=0;
	
	for(i = 0; i<31 ; i++){
		dias[i] = 0.0;
	}

	printf("====================================\n\n   Bem vindo a Conta POUPANÇA \n\n====================================\n");

	
	do{	
		printf("\n\nOpções disponíveis \n");
		printf("1 - Deposito \n");
		printf("2 - Saque \n");
		printf("3 - Consultar saldo total \n");
		printf("4 - Consultar saldo diário \n");
		printf("5 - Sair \n");
		printf("\nEscolha a opção desejada: ");
		scanf("%d", &option);
		printf("\n");
				
		switch(option){
		
		case 1:
		//Deposito
		
		flagdiadeposito = 0;
		
		do{
			
			printf("\n Digite o dia para depósito: ");
			scanf("%d", &diadeposito);
			
			if(diadeposito >= 1 && diadeposito <= 31){
				flagdiadeposito = 1;
			}else{
				printf("Dia inválido, insira novamente. \n");
			}
		
		} while(flagdiadeposito == 0);	
	
		flagvalor=0;
		
		do{
			valordeposito = 0.0;
			printf("\n Valor para depósito: ");
			scanf("%f", &valordeposito);
			
			if(valordeposito > 0.0){
				flagvalor = 1;
			}else{
				printf("Impossível depositar valores zerados ou negativos, repita a operação. \n");
			}
			
		} while(flagvalor == 0);
		
		printf("\n====================================\n   Depósito efetuado com sucesso. \n====================================\n");
		dias[diadeposito-1] = valordeposito;
		break;
			
		case 2: 
		//Saque
		
		break;
			
		case 3:
		//Consultar saldo total
		
		for(i=0; i<31; i++){
			saldototal+= dias[i];	
		}
		
		printf("\n====================================\n   Saldo total do mês: R$%.2f \n====================================\n", saldototal);
		
		break;	
		
		case 4:
		//Consultar saldo diário
		
		flagdia = 0;
		
		do{
			
			printf("Digite o dia para consulta: ");
			scanf("%d", &diasaldo);
			
			if(diasaldo >= 1 && diasaldo <= 31){
				flagdia = 1;
			}else{
				printf("Dia inválido, insira um dia válido. \n");
			}
			
		} while (flagdia == 0);
		
		saldodia=0;
		
		for(i=0; i<diasaldo; i++){
		saldodia+=dias[i];	
		}
		
		printf("Saldo disponível no dia %d: R$ %.2f \n", diasaldo, saldodia);	
		
		break;
		
					
		case 5:
		//sair
			printf("Volte sempre. \n");
			
		break;
		
		
		default:
			printf("Opção inválida. \n");

		break;
		
	}

	} while (option != 5);
	
	
	return 0;
}
