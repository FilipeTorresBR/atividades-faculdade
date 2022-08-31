#include <stdio.h>
#include <stdbool.h>

int verificador(int numero_usuario){
    if (numero_usuario % 2 == 0){
        return true;
    }else{
        return false;
    }
    
}
void main(){
    int numero_usuario;

    printf("Insira um numero para saber se ele é par ou impar: ");
    scanf("%d", &numero_usuario);

    if(verificador(numero_usuario)){
        printf("É par\n");
    }else{
        printf("É impar\n");
    }
}