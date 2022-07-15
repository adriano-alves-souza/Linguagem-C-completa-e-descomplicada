/*3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>

int main(void){
    int i;
    float v[i];

    for(i= 0; i< 5; i++){
        printf("valor %d: ",i +1);
        scanf("%f", &v[i]);
    }

    float soma = 0;
    for(i = 0 ; i < 5; i++){
        printf("--%f\n", v[i]);
        soma += v[i];
    }
    float media = soma / 5;
    printf("Media = %f\n", media);
    return 0;
}