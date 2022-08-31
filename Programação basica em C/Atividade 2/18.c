#include <stdio.h>
 
int main(){
	
	int fatorial, n;
	printf("Numero a ser fatorado: ");
	scanf("%d", &n);
 
	for(fatorial = 1; n > 1; n = n - 1){
		fatorial = fatorial * n;
 	}
	
	printf("\nfatorialorial calculado: %d\n", fatorial);

return 0;
}