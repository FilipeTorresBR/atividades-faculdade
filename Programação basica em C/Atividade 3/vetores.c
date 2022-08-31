#include <stdio.h>

void main(){
	int idade[4], i, soma = 0;

	for(i = 0; i < 4; i++){
		printf("Digite a idade: ");
		scanf("%d", &idade[i]);
	
		soma += idade[i];
	}
	printf("A média das idades é igual a: %.2f\n", (float) soma / 4);
}

