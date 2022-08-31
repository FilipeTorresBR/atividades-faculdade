#include <stdio.h>

float media(){
    int media = 0, count = 0; 
    float usuario_numero;

    printf("Insira um numero positivo: ");
    scanf("%f", &usuario_numero);

    media = media + usuario_numero;
    count += 1;


    return media;
}

void main(){
    while(0==0){
        printf("%f\n", media());
    }    
}