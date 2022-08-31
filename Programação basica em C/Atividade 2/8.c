#include <stdio.h>

void main(){
	int valor_sacar = 0, notas50 = 0, notas10 = 0, notas5 = 0, notas1 = 0, count;

	printf("Quanto você deseja sacar: ");
	scanf("%d", &valor_sacar);

	if (valor_sacar >= 50){
		notas50 = valor_sacar / 50;
		valor_sacar = valor_sacar - 50 * notas50;
	}

	if (valor_sacar >= 10){
		notas10 = valor_sacar / 10;
		valor_sacar = valor_sacar - 10 * notas10;
	}  

	if (valor_sacar >= 5 ){
		notas5 = valor_sacar / 5;
		valor_sacar = valor_sacar - 5 * notas5;
	}

	if (valor_sacar >= 1 ){
		notas1 = valor_sacar / 1;
		valor_sacar = valor_sacar - notas1;
	}
		printf("%d notas de 50,\n%d notas de 10,\n%d notas de 5,\n%d notas de 1\n", notas50, notas10, notas5, notas1);
}
