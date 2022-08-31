#include <stdio.h>

int impares(int x[500]){
    int impares;
    for(int i = 0; i < 500; i++){
        if((x[i] % 2) != 0){
            printf("%d\n", x[i]);
        }
    }
}

void main(){
    int x[500], soma = 0;

    for(int i = 0; i < 500; i++){
        x[i] = i;
    }
    impares(x);
}