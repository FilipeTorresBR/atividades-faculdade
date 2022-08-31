#include <stdio.h>

int pares(int x[15]){
    int pares;
    for(int i = 0; i < 15; i++){
        if((x[i] % 2) == 0){
            pares += 1;
        }
    }
    return pares;
}

void main(){
    int x[15], soma = 0;

    for(int i = 0; i < 15; i++){
        x[i] = i;
    }

    printf("Há %d numero pares\n", pares(x));
}