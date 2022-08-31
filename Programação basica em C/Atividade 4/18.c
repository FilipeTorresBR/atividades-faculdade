#include <stdio.h>

int soma(int x, int y){
    return x + y;
}

void main(){
    int a[10], b[10], c[10];

    for(int i = 0; i < 10; i++){
        a[i] = i;
        b[i] = i + 3;
        c[i] = soma(a[i], b[i]);
        printf("%d\n", c[i]);
    }
}