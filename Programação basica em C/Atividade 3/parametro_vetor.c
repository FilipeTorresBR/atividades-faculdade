#include <stdio.h>

void modificavetor(float * vet){
    int i;
    
    for(i=0;i<25;i++){
        vet[i] = 0.0;
    }
}

void imprimevetor (float vet[25]){
    int i;

    for(i=0;i<25;i++){
        printf("Valor da posição %d = %f\n", i, vet[i]);
    }
}


void main(){
    float vet[25];
    int i;

    for(i=0;i<25;i++){
        vet[i] = (float) (10+i)/2;

    }
    
    imprimevetor(vet);
    modificavetor(vet);
    imprimevetor(vet);
}