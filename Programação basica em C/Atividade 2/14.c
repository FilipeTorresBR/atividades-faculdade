#include <stdio.h>

void main(){
	int filhos, salario_cem, salario, salario_anterior, media_salario, media_filho, maior_salario = 0;
	int count, percentual_salario_cem = 0;
	while(0==0){
		printf("Insira o salário do cidadão ");
		scanf("%d", &salario);

		if(salario < 0){
			salario = 0;
			break;
		}else{
			printf("Insira a quantidade de filhos do cidadão ");
			scanf("%d", &filhos);

			if(salario <= 100){
				salario_cem ++;
			}
			if(salario > salario_anterior){
				maior_salario = salario;
			}

			salario_anterior = salario;
			count = count + 1;
			media_salario += salario;
			media_filho += filhos;
		}
	}
	media_filho = media_filho / count;
	media_salario = media_salario / count;
	percentual_salario_cem = (salario_cem * 100) / count;
	
	printf("Os dados extrídos foram: %d\n", count);
	printf("A média do salario da população é %d reais;\n", media_salario);
	printf("A média do número de filhos é %d;\n", media_filho);
	printf("O maior salário foi %d reais;\n", maior_salario);
	printf("O percentual de pessoas com salário de até 100 reais é %d.\n", percentual_salario_cem);
}