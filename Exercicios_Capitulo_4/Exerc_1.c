/*1) Faça um programa que leia dois números e mostre qual deles é o maior.*/
#include <stdio.h>

int main(void){
    int x,y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&x,&y);

    x > y? printf("%d\n",x):printf("%d\n",y);
    return 0;
}