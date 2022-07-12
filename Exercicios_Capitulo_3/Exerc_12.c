/*12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = pi * raio^2 * altura, em que pi = 3.141592*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main(void){
    float raio,altura,V;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    V = PI * pow(raio,2) * altura;
    printf("O volume do cilindro e %fM³",V);
    return 0;
}