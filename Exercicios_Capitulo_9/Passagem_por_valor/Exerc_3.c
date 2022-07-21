/*3) Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>
float conversor(float F);
int main(void){
    float F,C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = conversor(F);
    printf("%fºF = %fºC", F,C);
    return 0;
}

float conversor(float F){
    return (F - 32.0) * (5.0/9.0);
}