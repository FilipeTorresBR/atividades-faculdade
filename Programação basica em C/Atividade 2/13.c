/*
	Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles
	estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas
	informações.
*/
#include <stdio.h>

void main(){

	int count, num, fora_intervalo = 0;
	for(count = 0; count < 10; count++){
		printf("Insira um número: ");
		scanf("%d", &num);

		if(num < 10 || num > 20){
			printf("Fora do intervalo\n");
		}
		else{
			printf("Dentro do intervalo\n");
			fora_intervalo = fora_intervalo + 1;
		}
	}
	printf("Dos 10 numeros, %d estão dentro do intervalo\n", fora_intervalo);
}
