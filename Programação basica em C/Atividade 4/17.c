#include <stdio.h>

int fatorial(int n){
    int fatorial = 1;
    for(int i = 1; i <=n; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

void main(){
    int a[10], b[10];

    for(int i = 0; i < 10; i++){
        a[i] = i;
        b[i] = fatorial(a[i]);
        printf("%d\n", b[i]);
    }
}