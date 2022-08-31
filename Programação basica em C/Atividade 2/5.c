#include <stdio.h>

void main (){
	float salario;

	printf("Inserir salário inicial: ");
	scanf("%f", &salario);

	float novo_salario = (salario) + (salario * 0.15);
	float novo_salario_real = (novo_salario - (novo_salario * 0.08));

	printf("Salário inicial: %.2f\nSalario reajustado em 15 por cento %.2f\nSalario reajustado menos impostos %.2f\n", salario, novo_salario, novo_salario_real);
}
