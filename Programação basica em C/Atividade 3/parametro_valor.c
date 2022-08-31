#include <stdio.h>

void test(float preco){
	printf("Valor recebido da função main %.1f\n", preco);
	preco = 15.0;
	printf("Valor definido dentro da função test %.1f\n", preco);
}

void main(){
	float preco = 5.0;
	printf("Valor definido dentro da função main: %.1f\n", preco);

	test(preco);
	printf("Valor enviado para a função test %.1f\n", preco);
}