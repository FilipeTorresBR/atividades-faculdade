#include <stdio.h>
#include <math.h>

void main(){
	float valor_pagar = 0.00, entrada, parcela1, parcela2, resto;

	printf("valor_pagar(0.00): ");
	scanf("%f", &valor_pagar);

	entrada = (int)valor_pagar / 3;
	resto = fmod(valor_pagar, 3);

	entrada += resto;

	parcela1 = (valor_pagar - entrada) / 2;
	parcela2 = parcela1;
	printf("Valor total a pagar: %.2f,\nValor da entrada: %.2f,\nValor da primeira e da segunda parcela: %.2f\n", valor_pagar, entrada, parcela1);

}
