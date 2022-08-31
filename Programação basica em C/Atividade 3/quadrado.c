#include <stdio.h>

int quadrado (int a){
	return a * a;
}

void main(){
	int valor = 5;
	int quad_valor = quadrado(valor);
	printf("%d ao quadrado é igual a %d: \n", valor, quad_valor);
}