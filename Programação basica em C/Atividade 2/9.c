#include <stdio.h>
#include <math.h>

void main(){
	int horas, minutos, segundos, resto;
	float horas_entrada;

	printf("Insira as horas a serem convertidas ");
	scanf("%f", &horas_entrada);

	horas = horas_entrada / 60;
	resto = horas_entrada % 60;
	minutos = resto % 60;
	segundos = resto / 60;

	printf("%dh:%dm:%ds\n", horas, minutos, segundos);
}
