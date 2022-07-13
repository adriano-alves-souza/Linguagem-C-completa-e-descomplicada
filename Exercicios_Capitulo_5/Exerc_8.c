/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/
#include <stdio.h>

int main(void){
    int i,n, soma = 0;
    float media;
    printf("Digite 10 inteiros\n");
    for(i = 1; i <= 10; i++){
        printf("Valor %d: ",i);
        scanf("%d", &n);
        soma += i;
    }
    media = soma / 10.0;
    printf("A media dos 10 valores digitados é %f\n",media);
    return 0;
}