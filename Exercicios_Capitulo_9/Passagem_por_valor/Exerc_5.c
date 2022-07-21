/*5) Escreva uma função para o cálculo do volume de uma esfera
V = 4/3*pi * r^3, em que pi = 3.1414592 valor do raio r deve ser passado por parâmetro.*/

#include <stdio.h>
#define PI 3.141592

float volEsfera(float raio);
int main(void){
    float raio,volume;

    printf("Volume de uma esfera.\n");
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = volEsfera(raio);
    printf("O volume da esfera é %fcm³\n",volume);
    return 0;
}

float volEsfera(float raio){
    return 4.0/3.0 * PI * (raio * raio * raio);
}