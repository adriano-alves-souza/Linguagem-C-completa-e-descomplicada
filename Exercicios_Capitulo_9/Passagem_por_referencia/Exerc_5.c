/*5) Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n
números D= √(∑(v[i]-m)²)/n em que m é a média desse vetor.*/

#include <stdio.h>
#include <math.h>
#define TAM 3

double mediaValores(double *vetor, int n);
double somatorio(double me, double *vetor, int n);

int main(void){
    double media,soma,V[TAM],Dp;
    int i;

    printf("Digite os valores.\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ",i+1);
        scanf("%lf", &V[i]);
    }

    media = mediaValores(V, TAM);
    soma = somatorio(media,V,TAM);

    Dp = sqrt(soma/TAM);

    printf("Dp = %f\n",Dp);
    return 0;
}

double mediaValores(double *vetor, int n){
    int i;
    double soma = 0;

    for(i = 0; i < n; i++){
        soma += vetor[i];
    }
    return soma / n;
}

double somatorio(double me, double *vetor, int n){
    int i;
    double soma = 0;

    for(i = 0; i < n; i++){
        soma += ((vetor[i] - me) * (vetor[i] - me));
    }
    return soma;
}