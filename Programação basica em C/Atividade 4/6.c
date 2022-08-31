#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool positivo(int numero_usuario){
    if(numero_usuario > 0){
        return true;
    }else{
        return false;
    }
}

void main(){
    int numero_usuario;

    printf("Insira o numero para saber se ele é negativo ou positivo: ");
    scanf("%d", &numero_usuario);

    if(numero_usuario == 0){
        printf("O número é neutro\n");
    }else if(positivo(numero_usuario)){
        printf("O número é positivo\n");
    }else{
        printf("O numero é negativo\n");
    }

}