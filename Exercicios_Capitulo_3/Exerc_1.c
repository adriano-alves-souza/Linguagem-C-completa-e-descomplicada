/*1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/
#include <stdio.h>

int main(void){
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Antecessor = %d\nSucessor = %d\n",num - 1, num + 1);
    return 0;
}