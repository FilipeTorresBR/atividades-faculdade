#include <stdio.h>
#include <stdlib.h>

void dividir(double B[50], int maior){
    for(int i = 0; i < 50; i++){       
        B[i] = B[i] / maior;
        printf("%lf\n", B[i]);
    }
}

void verificar(double B[50]){
    int maior = 0;
    for(int i = 0; i < 50; i++){       
        if(B[i] > maior){
            maior = B[i];
        }
    }
    dividir(B, maior);
}

void main(){
    double B[50];

    for(int i = 0; i < 50; i++){
        B[i] = rand() % 100;
    }
        
    verificar(B);
}