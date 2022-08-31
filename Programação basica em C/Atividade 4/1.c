#include <stdio.h>
#include <math.h>

float calcula(float raio){
    return 3.14 * (raio * raio);
}

void main(){
    float raio;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    float resultado = calcula(raio);
    printf("O resultado é: %f\n", resultado);
}