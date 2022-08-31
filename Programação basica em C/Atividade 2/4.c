#include <stdio.h>
#include <math.h>

void main(){
	int dias_entrada, dias, meses, anos, resto;

	printf("Insira os dias a serem convertidos ");
	scanf("%d", &dias_entrada);

	anos = dias_entrada / 360;
	resto = dias_entrada % 360;
	meses = resto / 30;
	dias = resto % 30;

	printf("%d anos - %d meses - %d - dias\n", anos, meses, dias);
}
