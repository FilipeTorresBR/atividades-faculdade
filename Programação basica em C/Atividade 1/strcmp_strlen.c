#include <stdio.h>
#include <string.h>

void main(){
	char nomecli[26] = "Filipe Kaue Torres Soares";
	char nomefunc[26] = "Filipe Kaue Torres Soares";

	if(strcmp(nomecli, nomefunc) == 0){
		printf("Os conteúdos são iguais. \n");
	}
	else{
		printf("Os conteúdos são diferentes. \n");
	}

	int tamanhostring = strlen(nomecli);
	printf("%s possui %d caracteres (contando com espaços)\n", nomecli, tamanhostring);
}
