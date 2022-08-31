#include <stdio.h>

int maior_menor(int num1, int num2){
	if(num1 > num2){
		return num1;
	}else{
		return num2;
	}
}

void main(){
	int num1, num2, maior;

	printf("Insira o primeiro número: ");
	scanf("%d", &num1);

	printf("Insira o segundo número: ");
	scanf("%d", &num2);

	maior = maior_menor(num1, num2);

	printf("O maior numero é o: %d\n", maior);
}
