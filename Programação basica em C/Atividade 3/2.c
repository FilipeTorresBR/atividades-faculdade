#include <stdio.h>

int conversor (int anos, int meses, int dias){
	anos = anos * 360;
	meses = meses * 30;

	return(anos + meses + dias);
}

void main(){
	int anos, meses, dias, idade_dias;

	printf("Anos: ");
	scanf("%d", &anos);

	printf("Meses: ");
	scanf("%d", &meses);

	printf("Dias: ");
	scanf("%d", &dias);

	idade_dias = conversor(anos, meses, dias);

	printf("A idade em dias* é: %d\n", idade_dias);
	printf("*Considerando um ano tendo 360 dias\n");
}