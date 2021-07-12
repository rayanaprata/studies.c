/* Crie um programa em linguagem C, que imprima na tela a soma dos valores pares de um intervalo entre dois números informados pelo usuário. */

#include <stdio.h>
int main () {
	
	int v1, v2, i, total=0;
	
	printf("Insira um intervalo de valores: ");
	scanf("%d", &v1);
	scanf("%d", &v2);
	
	for(i=v1; i<v2; i++){
		if(i%2 == 0){
			total = total + i;
		}
	}

	printf("A soma dos valores pares entre %d e %d é igual a %d", v1, v2, total);

return 0;
}
