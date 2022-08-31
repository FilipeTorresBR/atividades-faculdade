#include <stdio.h>
#include <math.h>

void main(){
	int resto = 10 % 3;

	double valor = 152.4;
	int aux = (int)(valor / 3);
	double restod = valor = ((double) aux * 3);

	printf("Resto inteiro: %d\nResto float: %lf\n", resto, restod);
}
