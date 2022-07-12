/*2) Faça um programa que leia um número real e imprima a quinta parte desse número.*/
#include <stdio.h>

int main(void){
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("A quinta parte de %f e %f\n",num, num / 5);
    return 0;
}