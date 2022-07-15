/*7) Faça um programa que receba do usuário um vetor X com 10 posições. 
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

#include <stdio.h>
#define TAM 10
int main(void){
    int x[TAM];
    int i;

    printf("Digite os 10 valores.\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &x[i]);
    }

    int maior,menor;
    maior = menor = x[0];

    for(i = 1; i < TAM; i++){
        if(maior < x[i]){
            maior = x[i];
        }
        if(menor > x[i]){
            menor = x[i];
        }
    }

    printf("Maior elemento do vetor: %d\nMenor elemento do vetor: %d\n", maior, menor);
    return 0;
}