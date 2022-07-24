/*17) Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o
resultado da seguinte série S: S=2/4+5/5+10/6+....+(N²+1) / (N+3)*/

#include <stdio.h>
#include <math.h>
float serieS(int n);
int main(void){
    int num;
    float resu;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resu = serieS(num);
    printf("O resultado da serie S é %f\n",resu);
    return 0;
}

float serieS(int n){
    float soma = 0;
    int i;
    for(i = 1; i <= n; i++){
        soma += (pow(i,2) + 1) / (i + 3);
    }
    return soma;
}