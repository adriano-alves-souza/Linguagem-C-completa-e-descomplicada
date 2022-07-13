/*3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/
#include <stdio.h>

int main(void){
    int n,i,j;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    j = 0;
    i = 0;
    while(j <= n){
        if(i % 2 != 0){
            printf("%d\n",i);
            j++;
        }
        i++;
    }
    return 0;
}