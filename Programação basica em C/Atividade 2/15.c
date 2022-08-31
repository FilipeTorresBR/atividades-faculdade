#include <stdio.h>

void main(){

	int ze = 110;
	int chico = 150;
	int ano = 0;
	while(chico > ze){
		chico += 2;
		ze += 3;
		ano += 1;
	}
	printf("Demorará %d anos pro Zé ser maior que Chico\n", ano);
}
