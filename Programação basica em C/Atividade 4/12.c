#include <stdio.h>

int fatorial(int n){
    int fatorial = 1;

    for(int i = 1; i <=n; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

void main(){
    int n;

    printf("Insira um numero inteiro para fatoriar: ");
    scanf("%d", &n);

    printf("O resultado é %d\n", fatorial(n));
}