/*13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = raizq a² + b²
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.*/
#include <stdio.h>
#include <math.h>

int main(void){
    float a,b,h;
    printf("Digite o valor de a e b: ");
    scanf("%f%f", &a,&b);

    h = sqrt(pow(a,2) + pow(b,2));
    printf("A hipotenusa e %f",h);
    return 0;
}