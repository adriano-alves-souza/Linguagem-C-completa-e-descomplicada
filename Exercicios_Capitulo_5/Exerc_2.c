/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/
#include <stdio.h>

int main(void){
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(;n >= 0; n--){
        printf("%d\n",n);
    }
    return 0;
}