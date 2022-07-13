/*20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor E, conforme a fórmula a seguir:
E = 1/1! + 1/2! + 1/3! +....1/N! */
#include <stdio.h>

int main(void){
    int i,n,j;
    double e,fat;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fat = 1;
        for(j = 1; j <= i; j++){
            fat *= j;
        }
        e += ((double)1.0 / fat);
    }
    printf("O valor de E = %f\n",e);
    return 0;
}