/*12) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. 
Essa função deve retornar, por referência, dois valores: a soma dos números pares e ímpares.*/

#include <stdio.h>
#define MAX 10
void paresImpares(int *vet, int n, int *somaPar, int *somaImpar);
int main(void){
    int N[MAX];
    int i,somaPar,somaImpar;

    printf("Digite %d numero inteiros.\n", MAX);
    for(i = 0; i < MAX; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &N[i]);
    }

    paresImpares(N, MAX, &somaPar, &somaImpar);
    printf("A soma dos numeros pares do vetor é %d.\n", somaPar);
    printf("A soma dos numero impares do vetor é %d.\n", somaImpar);

    return 0;
}

void paresImpares(int *vet, int n, int *somaPar, int *somaImpar){
    *somaPar = 0;
    *somaImpar = 0;

    for (int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            *somaPar += vet[i];
        }else{
            *somaImpar += vet[i];
        }
    }
    
}