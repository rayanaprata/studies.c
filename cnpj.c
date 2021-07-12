/* Crie um vetor com até 18 posições para armazenar
um CNPJ e preencha-o com numeros aleatórios entre 0
e 9. Imprima o CNPJ formatado (xx.xxx.xxx/xxxx-xx). */

#include <stdio.h>
int main () {
	
	int i, cnpj[18];
	
	for(i=0; i<14; i++){
		cnpj[i] = rand() % 9;
		if(i == 2 || i == 5){
			printf(".");
		} else if (i==8){
			printf("/");
		} else if (i==12){
			printf("-");
		}
		printf("%d", cnpj[i]);
	}
	
	return 0;
}
