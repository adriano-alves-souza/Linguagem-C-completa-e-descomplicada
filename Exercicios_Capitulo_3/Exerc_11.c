/*11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
A área do círculo é A = pi * raio², sendo pi = 3.141592.*/
#include <stdio.h>
#include <math.h>
const float PI = 3.141592;
int main(void){
    float raio,A;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    A = PI * pow(raio,2);
    printf("A area do circulo e %fm", A);
    return 0;
}