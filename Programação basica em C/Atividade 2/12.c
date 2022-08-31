#include <stdio.h>

void main(){
	int count, num, base, altura, area, media = 0;

	for(count = 0; count < 5; count++){
		printf("Insira a base: ");
		scanf("%d", &base);

		printf("Insira a altura: ");
		scanf("%d", &altura);

		area = (base + altura) / 2;

		media += area;		
	}
	media = media / 5;
	printf("A media das 5 areas é %d\n", media);
}
