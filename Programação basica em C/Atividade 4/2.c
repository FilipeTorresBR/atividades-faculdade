#include <stdio.h>
#include <string.h>
float calcula(float nota1, float nota2, float nota3, char letra[1]){
    if(strcmp(letra, "A") == 0){
        return (nota1 + nota2 + nota3)/3;
    }else{
        return ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10;
    }
}
void main(){
    float media, nota1, nota2, nota3;
    char letra[1];

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    printf("O que deseja fazer?\nInsira a letra 'A' para calcular a média aritmética\nOu insira a letra 'P' para calcular a média ponderada: ");
    scanf(" %[^\n]", letra);

    float resultado = calcula(nota1, nota2, nota3, letra);
    printf("O resultado é: %f\n", resultado);
}