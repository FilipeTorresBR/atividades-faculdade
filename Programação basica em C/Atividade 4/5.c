#include <stdio.h>

int categorizador(int idade){
    if(idade >= 5 && idade <= 7){
        return 1;
    }else if(idade >= 8 && idade <= 10){
        return 2;
    }else if(idade >= 11 && idade <= 13){
        return 3;
    }else if(idade >= 14 && idade <= 17){
        return 4;
    }else if(idade >= 18){
        return 5;
    }
}

void main(){
    int idade;
    printf("Qual a idade do nadador? ");
    scanf("%d", &idade);

    int categoria = categorizador(idade);
    printf("Ele pertence a categoria %d\n", categoria);
}