#include <stdio.h>

int conversor(int horas, int minutos, int segundos){
    horas = horas * 60 * 60;
    minutos = minutos * 60;

    return horas + minutos + segundos;
}
void main(){
    int horas, minutos, segundos;
    printf("Insira a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Insira a quantidade de minutos: ");
    scanf("%d", &minutos);
    
    printf("Insira a quantidade de segundos: ");
    scanf("%d", &segundos);

    int resultado = conversor(horas, minutos, segundos);
    printf("Este tempo é equivalente a %d segundos.\n", resultado);
}