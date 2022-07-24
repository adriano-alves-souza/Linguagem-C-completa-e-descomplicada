/*2) Escreva uma função para o cálculo do volume e área de uma esfera
V = 4/3*pi * r³,
A = 4*pi * r²
em que pi = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os
valores calculados devem ser retornados por referência.*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

void volumeArea(double r, double *v, double *a);

int main(void){
    double r,volume,area;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    volumeArea(r, &volume, &area);

    printf("O volume da esfera é %fm³\nA area da esfera é %fm²\n",volume,area);
    return 0;
}

void volumeArea(double r, double *v, double *a){
    *v = 4.0/3.0 * PI * pow(r,3);
    *a = 4 * PI * pow(r,2);
}