#include <stdio.h>

void main(){
	int idade = 10;
	char sexo = 'f';

	if((idade >= 18) && (sexo == 'm')){
		printf("Alistamento confirmado.\n");
	}
	else{
		printf("Não atende aos requisitos.\n");
	}
}
