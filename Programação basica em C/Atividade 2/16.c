#include <stdio.h>

void main(){
	int voto = -1;
	int A = 0;
	int B = 0;
	int C = 0;
	int nulo = 0;
	int branco = 0;

	while(voto != 0){
	
		printf("Vote! ");
		scanf("%d", &voto);

		switch(voto){
			case 1 : 
				A ++;
				break;
			case 2 : 
				B ++;
				break;
			case 3 : 
				C ++;
				break;
			case 4 : 
				nulo ++;
				break;
			case 5 : 
				branco ++;
				break;
			default : 
				printf("Opção inválida\n");
				break;
		}
	}
	printf("Voto no candidato A %d\nVoto no candidato B %d\nVoto no candidato C %d\nVoto nulo %d\nVoto branco %d\n", A, B, C, nulo, branco);
}
