#include <stdio.h>

int verificador(int a[25]){
    int x = 0;
    for(int i = -10; i < 15; i++){
        if(a[x] < 0){
            a[x] = 0;
        }   
        printf("%d\n", a[x]);
        x++;
    }
}

void main(){
    int a[25], x = 0;

    for(int i = -10; i < 15; i++){
        a[x] = i;
        x++;
    }
    verificador(a);
}