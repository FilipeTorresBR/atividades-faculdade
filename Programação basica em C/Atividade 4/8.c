#include <stdio.h>

float conceito(float media){
    if(media >= 0.0 && media <= 4.9){
        printf("Conceito é D\n");
    }else if(media >= 5.0 && media <= 6.9){
        printf("Conceito é C\n");
    }else if(media >= 7.0 && media <= 8.9){
        printf("Conceio é B\n");
    }else if(media >= 9.0 && media <= 10.0){
        printf("Conceio é A\n");
    }else{
        printf("Valor fora do paramentro 0 à 10\n");
    }
}
void main(){
    float media;

    printf("Insira a media do aluno: ");
    scanf("%f", &media);

    conceito(media);
}