/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endere-
ços e exiba o maior endereço.*/

#include <stdio.h>
int *maior(int *p1, int *p2);
int main(void){
    int y, x;


    printf("O maior endereço é %p.\n", maior(&x,&y));

    return 0;
}
int *maior(int *p1, int *p2){
    return p1 > p2? p1: p2;
}
