/*16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).*/
#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("%dx2 = %d\n",num,num << 1);
    printf("%d/2 = %d\n",num,num >> 1);
    return 0;
}