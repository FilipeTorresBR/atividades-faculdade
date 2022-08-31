#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool primo(int numero_usuario){
    int count, i;
    for(i = 2; i<=numero_usuario / 2; i++){
        if((numero_usuario % i) == 0){
            count++;
            return false;
            break;
        }
    }
    return true;
}
void main(){
    int numero_usuario;

    printf("Insira um numero para descobrir se ele é primo: ");
    scanf("%d", &numero_usuario);

    if(primo(numero_usuario)){
        printf("É primo\n");
    }else{
        printf("Não é primo\n");
    }
}