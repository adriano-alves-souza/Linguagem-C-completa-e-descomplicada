/*3) Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.*/
#include <stdio.h>

int main(void){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("%d é par.\n",x);
    }else{
        printf("%d é impar.\n",x);
    }
    return 0;
}