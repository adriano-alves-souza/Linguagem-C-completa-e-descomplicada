/*1) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/
#include <stdio.h>

int main(void){
    int n,i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        printf("%i\n",i);
    }
    return 0;
}