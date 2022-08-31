#include <stdio.h>

int main(){
	int count = 0, altura, idade, maior_idade, menor_idade, sexo, count_mulheres, count_homens, jovens;
	float media_idade_grupo, media_altura_mulheres, media_idade_homens;

	while(count < 1000){
		printf("Qual o seu sexo(0 - F/1 - M)? ");
		scanf(" %d", &sexo);
		
		if(sexo < 0 || sexo > 1){
			break;
		}

		printf("Qual a sua idade? ");
		scanf(" %d", &idade);
		
		printf("Qual a sua altura(cm)? ");
		scanf(" %d", &altura);

		if(count == 0){
			menor_idade = idade;
			maior_idade = idade;
		}

		media_idade_grupo += idade;
		count++;

		if(idade >= 18 || idade <= 35){
			jovens++;
		}
		if(idade < menor_idade){
			menor_idade = idade;
		}
		if(idade > maior_idade){
			maior_idade = idade;
		}

		if(sexo == 0){
			media_altura_mulheres += altura;
			count_mulheres++;
		}else{
			media_idade_homens += idade;
			count_homens++;
		}
	}
	media_idade_homens = (float)media_idade_homens / count_homens;
	media_altura_mulheres = (float)media_altura_mulheres / count_mulheres;
	media_idade_grupo = (float)media_idade_grupo / count;

	printf("A maior idade é igual a %d e a menor é %d\n", maior_idade, menor_idade);
	printf("A media da idade do grupo é de %2.f\n", media_idade_grupo);
	printf("A media da altura das mulheres é de %2.f\n", media_altura_mulheres);
	printf("A media da idade dos homens é de %2.f\n", media_idade_homens);

return 0;
}