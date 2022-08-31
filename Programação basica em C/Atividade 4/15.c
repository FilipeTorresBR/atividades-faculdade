#include <stdio.h>

int soma(int x[20]){
    int soma;
    for(int i = 0; i < 20; i++){
        soma += x[i];
    }
    return soma;
}

void main(){
    int x[20];

    for(int i = 0; i < 20; i++){
        x[i] = i;
    }

    printf("A soma de todos os numeros é %d\n", soma(x));
}