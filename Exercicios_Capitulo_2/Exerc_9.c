/*9) Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.*/
#include <stdio.h>

int main(void){
    float a,b;
    scanf("%f%f", &a,&b);
    printf("%f, %f", b,a);
    return 0;
}