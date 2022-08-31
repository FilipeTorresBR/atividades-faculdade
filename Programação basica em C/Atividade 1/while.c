#include <stdio.h>

void main(){
	int valor;
	printf("Informe o valor: ");
	scanf("%d", &valor);

	while(valor != 0 ){
		printf("O valor lido foi %d\n", valor);
		printf("Informe novamente um valor: ");
		scanf("%d", &valor);
	}
}
