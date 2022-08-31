#include <stdio.h>

void main(){
	int nota1;
	int nota2;
	int nota3;

	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);

	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);

	printf("Informe a terceira nota: ");
	scanf("%d", &nota3);

	float media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
	printf("A nota ponderada do aluno foi %f \n", media);
}
