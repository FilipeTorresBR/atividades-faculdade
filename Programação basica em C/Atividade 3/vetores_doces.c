#include <stdio.h>

void main(){
    int vendas[25], i, media, menor, maior;

    for(i=0;i<25;i++){
        printf("Valor da venda %d: ", i+1);
        scanf("%d", &vendas[i]);

        media += vendas[i];

        if(i==0){
            maior = menor = vendas[0];
        }
        if(maior < vendas[i]){
            maior = vendas[i];
        }
        if(menor > vendas[i]){
            menor = vendas[i];
        }
    }
    printf("O valor médio das vendas é: R$%.2f\n", (float) media / 25);
    printf("A maior venda foi de R$%d e a menor foi R$%d\n", maior, menor);
}