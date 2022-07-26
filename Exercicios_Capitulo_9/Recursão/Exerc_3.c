/*3) Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

void naturais(int n);

int main(void){
    int n;

    printf("Digite: ");
    scanf("%d", &n);

    naturais(n);
    return 0;
}

void naturais(int n){
    if(n == 0){
        printf("%d ", n);
    }else{
        naturais(n-1);
        printf("%d ", n);
    }
}