#include <stdio.h>

void main(){
	float base_maior;
	float base_menor;
	float altura;

	printf("Insira a base menor: ");
	scanf("%f", &base_menor);

	printf("Insira a base_maior: ");
	scanf("%f", &base_maior);

	printf("Insira a altura: ");
	scanf("%f", &altura);

	float area = ((base_maior + base_menor) * altura) / 2;

	printf("%f\n", area);
}