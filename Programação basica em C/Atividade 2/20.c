#include <stdio.h>
#include <string.h>
#include <math.h>

void main(){
	int cod_cidade, veiculos, acidentes, count = 0, count_RS = 0;
	int menor_num_acidentes, maior_num_acidentes, cidade_menor_num_acidentes, cidade_maior_num_acidentes;
	float media_veiculos, media_acidentes_RS;
	char estado[2];

	while(0 == 0){
		printf("Insira o código da cidade: ");
		scanf("%d", &cod_cidade);

		if(cod_cidade < 0){
			break;
		}

		printf("Qual o estado dessa cidade ");
		scanf(" %[^\n]", estado);

		printf("Numero de veiculos de passeio em 2012: ");
		scanf("%d", &veiculos);

		printf("Numero de acidentes com vitimas: ");
		scanf("%d", &acidentes);

		if(count == 0){
			menor_num_acidentes = acidentes;
			maior_num_acidentes = acidentes;
			cidade_menor_num_acidentes = cod_cidade;
			cidade_maior_num_acidentes = cod_cidade;
		}

		media_veiculos += veiculos;
		count++;

		if(acidentes < menor_num_acidentes){
			menor_num_acidentes = acidentes;
			cidade_menor_num_acidentes = cod_cidade;
		}
		if(acidentes > maior_num_acidentes){
			maior_num_acidentes = acidentes;
			cidade_maior_num_acidentes = cod_cidade;
		}

		if(strcmp(estado, "RS") == 0){
			count_RS++;
			media_acidentes_RS += acidentes;
		}
	}
	media_veiculos = (float)media_veiculos / count;
	media_acidentes_RS = (float)media_acidentes_RS / count_RS;
	
	printf("O maior índice de acidentes é na cidade de codigo %d com %d acidentes, e o menor índice é na cidade de codigo %d com %d acidentes\n", 
		cidade_maior_num_acidentes, maior_num_acidentes, cidade_menor_num_acidentes, menor_num_acidentes);
	printf("A media de veiculos no Brasil é %2.f\n", media_veiculos);
	printf("A media de acidente no Rio Grande do Sul é de %2.f\n", media_acidentes_RS);
}
