/*3) Faça um programa que leia três valores inteiros e mostre sua soma.*/
#include <stdio.h>

int main(void){
    int a,b,c,soma;

    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a,&b,&c);
    soma = a+b+c;
    printf("A soma de %d+%d+%d=%d",a,b,c,soma);
    return 0;
}