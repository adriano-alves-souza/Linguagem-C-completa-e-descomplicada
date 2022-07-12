/*18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita,
do primeiro número pelo segundo.*/
#include <stdio.h>

int main(void){
    int a,b;
    printf("Digite dois numero inteiros: ");
    scanf("%d%d", &a,&b);

    printf("%d << %d = %d\n",a,b, a<<b);
    printf("%d >> %d = %d\n",a,b,a>>b);
    return 0;
}