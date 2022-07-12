/*8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>

int main(void){
    float c, f;
    printf("Digite a em graus celcius: ");
    scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32;
    printf("%fCº = %fFº\n",c,f);
    return 0;
}