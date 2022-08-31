#include <stdio.h>
#include <stdlib.h>

void ordenar(int A[50]){
    int aux = 0;
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
            if(A[i] < A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
}

void main(){
    int A[50];

    for(int i = 0; i < 50; i++){
        A[i] = rand() % 10000;
    }
    ordenar(A);

    for(int i = 0; i < 50; i++){
        printf(" %d\n", A[i]);
        A[i]=0;
    }
}