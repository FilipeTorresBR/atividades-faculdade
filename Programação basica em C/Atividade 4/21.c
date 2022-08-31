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
    int x[10], count = 0;

    while(count < 9){
        for(int i = 102; i < 150; i++){
            if(primo(i) == 1){
                x[count] = i;
                printf("%d\n", x[count]);
                count++;
            }
        }
    }
}