/*19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”,
“ou bit a bit” e “e bit a bit” entre eles.*/
#include <stdio.h>

int main(void){
    int a,b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&a,&b);

    printf("%d^%d ou exclusivo = %d\n",a,b,a^b);
    printf("%d|%d ou bit a bit = %d\n",a,b,a | b);
    printf("%d&%d e bit a bit = %d\n",a,b,a & b);
    return 0;
}