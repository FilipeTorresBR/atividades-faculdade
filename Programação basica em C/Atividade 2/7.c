#include <stdio.h>

void main (){
	float peso_atual;

	printf("Qual o seu peso atual? ");
	scanf("%f", &peso_atual);

	float peso_acima = peso_atual + (peso_atual * 0.15);
	float peso_abaixo = peso_atual - (peso_atual * 0.2);

	printf("Se você engordace 15 por cento, teria %.2f kg.\n Caso você emagreça 20 por cento, teria %.2f\n", peso_acima, peso_abaixo);
}
