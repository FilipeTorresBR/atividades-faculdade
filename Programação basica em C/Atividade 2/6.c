#include <stdio.h>

int main (){
	float qtd_hamb;

	printf("Quantos hamburguers você precisa fazer? ");
	scanf("%f", &qtd_hamb);

	float queijo = (qtd_hamb * 50 * 2) / 1000;
	float presunto = (qtd_hamb * 50) / 1000;
	float hamburguer = (qtd_hamb * 100) / 1000;

	printf("Para fazer %.0f hamburguers, você precisa comprar:\n %.2fkg de queijo\n %.2fkg de presunto \n %.2fkg de carne de hamburguer\n", qtd_hamb, queijo, presunto, hamburguer);
}
