/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
#include <stdio.h>

int main(void){
    int i,n,soma;
    float media;
    printf("Digite 10 numeros inteiros positivos\n");
    i = 1;
    soma = 0;
    while(i <= 10){
        printf("Valor %d: ",i);
        scanf("%d", &n);
        if(n >= 0){
            soma += n;
            i++;
        }
    }
    media = soma / 10.0;
    printf("Media dos valores lidos: %f\n",media);
    return 0;
}