#include <stdio.h>

int primo(int numero_usuario){
    int count, i;
    for(i = 2; i<=numero_usuario / 2; i++){
        if((numero_usuario % i) == 0){
            count++;
            return 0;
        }
    }
    return 1;
}

void main(){
    int k[15], p[7];

    for(int i = 1; i <= 15; i++){
        k[i] = i;
        if(primo(k[i]) == 1){
            p[i] = k[i];
            printf("%d\n", p[i]);
        }
    }
}