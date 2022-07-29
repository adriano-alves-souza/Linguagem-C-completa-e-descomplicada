/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>
int maior(int *p1, int *p2);
int main(void){
    int x,y;

    printf("Digite dois inteiros: ");
    scanf("%d%d", &x,&y);

    printf("O valor do maior endereço é %d.\n", maior(&x,&y));
    return 0;
}
int maior(int *p1, int *p2){
    return p1 > p2? *p1: *p2;
}