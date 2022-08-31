#include <stdio.h>
#include <string.h>
#include <math.h>

typedef int boolean;

#define true 1;
#define false 0;

void main () {
	boolean maioridade = true;

	if(maioridade){
		printf("Possui 18 anos ou mais.\n");
	}
	else{
		printf("Entrada não permitida.\n");
	}
}
