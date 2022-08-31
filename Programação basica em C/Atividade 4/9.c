#include <stdio.h>
#include <string.h>

float calculadora(float altura, char sexo[1]){
    if(strcmp(sexo, "F")==0){
        return (altura * 62.1) - 44.7;
    }else{
        return (altura * 72.7) - 58;
    }
}

void main(){
    float altura;
    char sexo[1];
    printf("Qual o seu sexo?(F/M) ");
    scanf(" %[^\n]", sexo);

    printf("Qual a sua altura?(X.XX) ");
    scanf("%f", &altura);

    printf("O seu peso ideal é: %f\n", calculadora(altura, sexo));
}