#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool perfeito(int numero_usuario){
    int soma =0, i;
    for(i = 1; i < numero_usuario; i++){
        if((numero_usuario % i) == 0){
              soma += i;
        }
    }
    if(soma == numero_usuario){
        return true;
    }else{
        return false;
    }
}

void main(){
    int numero_usuario;

    printf("Insira um número para descobrir se ele é perfeito: ");
    scanf("%d", &numero_usuario);

    
    if(perfeito(numero_usuario)){
        printf("Este número é perfeito\n");
    }else{
        printf("Este número NÃO é perfeito\n");
    }
}