#include <stdio.h>

int verificador(int x, int y, int z){
    if(x < y + z && y < x + z && z < x + y){
        if(x == y && x == z){
            return 1;
        }else if(x != y && x != z){
            return 3;
        }else{
            return 2;
        }
    }else{
        return 0;
    }
}

void main(){
    int x, y, z, resultado;

    printf("Insira o comprimento da primeiro aresta: ");
    scanf("%d", &x);

    printf("Insira o comprimento da segunda aresta: ");
    scanf("%d", &y);

    printf("Insira o comprimento da terceira aresta: ");
    scanf("%d", &z);

    resultado = verificador(x, y, z);
    if(resultado == 0){
        printf("Não é possível existir um triangulo com estas dimensões\n");
    }else if(resultado == 1){
        printf("Este é um triangulo equilátero\n");
    }else if(resultado == 2){
        printf("Este é um triangulo escaleno\n");
    }else{
        printf("Este é um triangulo isóceles\n");
    }
}