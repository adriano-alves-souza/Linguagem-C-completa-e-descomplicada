/*1) Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/

#include <stdio.h>
int maiorNum(int x, int y);
int main(void){
    int x,y;

    printf("Digite dois numeros: ");
    scanf("%d%d", &x,&y);

    printf("O maior numero e %d.\n", maiorNum(x,y));
    return 0;
}
int maiorNum(int x, int y){
    return x > y? x:y; 
}