#include <stdio.h>

void main(){
	int idade;
	float salario;
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	printf("Informe o seu salário: ");
	scanf("%f", &salario);
	printf("Você possui %d anos e seu salário é de R$%f\n", idade, salario);
	printf("Seu salário é de R$ %.2f\n", salario);

	char sexo;
	printf("Informe m para masculino ou f para feminino: ");
	scanf(" %c", &sexo);

	char nome[25];
	printf("\n Informe o nome: ");
	scanf(" %[^\n]", nome);
	printf("O nome lido foi %s \n", nome);

}
