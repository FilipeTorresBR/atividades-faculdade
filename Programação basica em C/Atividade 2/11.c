#include <stdio.h>

void main(){
	int count, num, negativo = 0;

	for(count = 0; count < 8; count++){
		printf("Insira um número: ");
		scanf("%d", &num);

		if(num < 0){
			printf("É negativo\n");
			negativo = negativo + 1;
		}else{
			printf("É positivo\n");
		}
	}
	printf("Dos 8 numeros, %d são negativos\n", negativo);
}
