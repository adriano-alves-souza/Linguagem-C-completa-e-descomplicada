/*17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.*/
#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("~%d",~num);
    return 0;
}