/*19) Faça uma função que receba como parâmetro o valor de um ângulo em graus e
calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:
x=somatorio (-1)^n * (x^(2*n)) /(2*n)! em que x é o valor do ângulo em radianos. 
Considerar pi = 3.1414592 e n variando de 0 até 5. (radiano = 2*pi*(g/360)) */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

float radiano(float graus);
float cosseno(float graus);
int fatorial(int fat);

int main(void){
    float graus,x;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    x = cosseno(graus);
    printf("O cosseno dese angulo é %f\n",x);
    return 0;
}

float radiano(float graus){
    return 2 * PI * (graus / 360);
}

int fatorial(int fat){
    if(fat == 0){
        return 1;
    }else{
        return fat * fatorial(fat - 1);
    }
}

float cosseno(float graus){
    float soma = 0;
    int n;
    float x = radiano(graus);
    for(n = 0; n <= 5; n++){
        soma += ((pow(-1,n)) * (pow(x,(2*n)))) / fatorial(2*n);
    }
    return soma;
}
