/*2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.*/
#include <stdio.h>

int main(void){
    int x,y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&x,&y);

    if(x > y){
        printf("%d\n",x);
    }else if(y > x){
        printf("%d\n",y);
    }else{
        printf("Numeros iguais.");
    }
    return 0;
}