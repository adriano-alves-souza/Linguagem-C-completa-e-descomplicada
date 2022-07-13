/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/
#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if(x > 0){
        printf("%d ao quadrado é %d\n",x, (int)pow(x,2));
        printf("A raiz quadrada de %d é %f\n",x, sqrt(x));
    }
    return 0;
}