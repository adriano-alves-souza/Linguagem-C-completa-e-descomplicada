/*4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula: V = pi * raio^2 * altura, em que pi = 3.1414592*/

#include <stdio.h>
#define PI 3.141592

float volCilindro(float altura, float raio);

int main(void){
    float raio,altura,volume;

    printf("Volume de um cilindro.\n");
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o radio do cilindro: ");
    scanf("%f", &raio);

    volume = volCilindro(altura,raio);
    printf("O volume é: %fm³\n",volume);
    return 0;
}

float volCilindro(float altura, float raio){
    return PI * (raio * raio) * altura;
}