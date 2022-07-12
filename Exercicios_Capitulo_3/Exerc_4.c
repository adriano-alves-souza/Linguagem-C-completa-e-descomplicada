/*4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/
#include <stdio.h>

int main(void){
    float v1,v2,v3,v4,soma,media;
    printf("Digite 4 numeros reais: ");
    scanf("%f %f %f %f", &v1,&v2,&v3,&v4);
    soma = v1+v2+v3+v4;
    media = soma / 4;
    printf("A media aritimetica dos valores e %f\n", media);
    return 0;
}