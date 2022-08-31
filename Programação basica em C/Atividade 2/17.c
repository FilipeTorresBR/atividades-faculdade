#include <stdio.h>

void main(){
	int codigo_aluno, nota1, nota2, nota3, count = 0;
	float media, media_geral;

	while(0==0){
		printf("Informe o código do aluno: "); 	
		scanf("%d", &codigo_aluno);

		if(codigo_aluno < 0){
			break;
		}

		printf("Insira a primeira nota do aluno\n");
		scanf("%d", &nota1);
		
		printf("Insira a segunda nota do aluno\n");
		scanf("%d", &nota2);
		
		printf("Insira a terceira nota do aluno\n");
		scanf("%d", &nota3);

		if(nota1 > nota2 && nota1 > nota3){
			media = (nota1 * 4) + (nota2 + nota3) * 3 ;
		}else if(nota2 > nota1 && nota2 > nota3){
			media = (nota2 * 4) + (nota1 + nota3) * 3 ;
		}else{
			media = (nota3 * 4) + (nota1 + nota2) * 3 ;
		}

		media = media / (float)10;
		media_geral += media;
		if(media >= 5){
			printf("Aluno: %d,\nPrimeira nota: %d,\nSegunda nota: %d,\nTerceira nota: %d,\nMedia: %.2f,\nResultado: APROVADO\n",codigo_aluno, nota1, nota2, nota3, media);
		}else{
			printf("Aluno: %d,\nPrimeira nota: %d,\nSegunda nota: %d,\nTerceira nota: %d,\nMedia: %.2f,\nResultado: REPROVADO\n",codigo_aluno, nota1, nota2, nota3, media);
		}

	count++;
	}

	media_geral = (float)media_geral / count;
	printf("Media geral da turma: %.2f\n", media_geral);
}

