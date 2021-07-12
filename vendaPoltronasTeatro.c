/* Desenvolva um programa para controlar a venda de
poltronas para um teatro. Solicitar na tela a poltrona
desejada informando a fila (linha) e coluna da poltrona
em questão. O teatro possui somente 10 filas com 5
poltronas em cada fila. Na opção “sair”, mostrar quais
poltronas foram vendidas. */

#include <stdio.h>
int main () {

	int opc, fila, poltrona, i, j, matriz[10][5];
	
	do {
    printf("Escolha a opção desejada: \n\n1 - Verificar os lugares disponpiveis. \n\n2 - Escolher a poltrona desejada. \n\n3 - Sair.");
    scanf("%d", &opc);

    if(opc < 1 || opc > 3)
      printf("Insira uma opção válida.");
    } while (opc < 1 && opc > 3);
    for(i=0; i<10; i++){
      for(j=0; j<5; j++){
        teatro[i][j] = 0; 
    }
	}

	switch (opc) {
		case 1:
			printf("\n\n Vazio = 0 \n\n Ocupado = 1 \n\n");
			for(i=0; i<10; i++){
				for(j=0; j<5; j++){
					printf("%d", teatro[i][j]); 
				}
				printf("\n");
			}
			break;
      
		case 2:
			do {
			  printf("Escolha a fila: ");
			  scanf("%d", &fila);
			} while (fila < 1 && fila > 10);

			do {
        printf("Escolha a poltrona: ");
        scanf("%d", &poltrona);
			} while (poltrona < 1 && poltrona > 5);

			teatro[fila][poltrona] = 1;
			break;

		case 3:
			printf("Poltronas vendidas: \n\n");
			printf("\n\n Vazio = 0 \n\n Ocupado = 1 \n\n");

			for(i=0; i<10; i++){
				for(j=0; j<5; j++){
					printf("%d", teatro[i][j]);
				}
				printf("\n");
			}
			break;
			
	}

	return 0;
}
