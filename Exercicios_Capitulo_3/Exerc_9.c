/*9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592.*/
#include <stdio.h>
#define PI 3.141592
int main(void){
    float g,r;
    printf("Digite o angulo em graus: ");
    scanf("%f", &g);
    r = g * PI / 180;
    printf("%f graus sao %f radianos\n",g,r);
    return 0;
}