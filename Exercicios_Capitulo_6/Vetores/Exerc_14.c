/*14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
dp = raiz do somatorio de (v[i] - media)^2
em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.*/

#include <stdio.h>
#include <math.h>
#define N 10

int main(void){
    int i;
    double v[N];

    printf("Digite os 10 valores")
    for(i = 0; i < N; i++){
        printf("Valor %d: ",i+1);
        scanf("%lf", &v[i]);
    }

    double soma = 0;
    for (i = 0; i < N; i++){
        soma += v[i];
    }

    double m = (double)soma / N;
    double dp;
    soma = 0;
    for (i = 0; i < N; i++){
        soma += pow((v[i] - m),2);
    }

    dp = sqrt(soma / N);
    printf("O desvio padrao é %f\n", dp);
    return 0;
}