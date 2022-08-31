/*
* Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados
de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a. a média de salário do grupo;
b. maior e menor idade do grupo;
c. quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.
*/
#include <stdio.h>
#include <string.h>

void main(){
	int idade, maior_idade, menor_idade = 150, media_salario = 0, mulher_salario_cem = 0;
	char sexo[1];
	float salario, count = 0.0;

	while(0 == 0){
		printf("Qual a sua idade? ");
		scanf("%d", &idade);

		if(idade < 0){
			break;
		}

		printf("Qual o seu sexo(M/F)? ");
		scanf(" %[^\n]", sexo);

		printf("Qual o seu salario? ");
		scanf("%f", &salario);

		media_salario += salario;
		count++;
		if(idade < menor_idade){
			menor_idade = idade;
		}
		if(idade > maior_idade){
			maior_idade = idade;
		}

		if(salario <= 100 && strcmp(sexo, "F") == 0){
			mulher_salario_cem += 1;
		}
	}
	media_salario = media_salario / count;
	printf("A média do salário é %2.f\nA maior idade é igua a %d e a menor é %d\nA quantidade de mulheres com salário até 100 reais é de %d\n", 
		salario, maior_idade, menor_idade, mulher_salario_cem);
}