#include <stdio.h>

void main(){
	float preco_gasolina;
	float valor_pago;

	printf("Insira o preco da gasolina: ");
	scanf("%f", &preco_gasolina);

	printf("Insira o valor pago no total: ");
	scanf("%f", &valor_pago);

	float qtd_litros = valor_pago / preco_gasolina;

	printf("Você abasteceu seu carro com %f litros de gasolina \n", qtd_litros);
}
