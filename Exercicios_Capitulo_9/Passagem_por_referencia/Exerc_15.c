/*15) Elabore uma função que receba um vetor contendo N valores e retorne por 
referência o maior e o menor elemento desse vetor.*/

#include <stdio.h>
#define MAX 10

void maiorMenor(int *vet, int n, int *maior, int *menor);

int main(void){
    int N[MAX];
    int maiorValor,menorValor;

    printf("Digite %d valores inteiros.\n", MAX);
    for(int i = 0; i < MAX; i++){
        printf("Valor %d: ",i+1);
        scanf("%d", &N[i]);
    }
    

    maiorMenor(N, MAX, &maiorValor, &menorValor);

    printf("%d é o maior valor do vetor N.\n", maiorValor);
    printf("%d é o menor valor do vetor N.\n", menorValor);
    return 0;
}

void maiorMenor(int *vet, int n, int *maior, int *menor){
    int i;
    *maior = vet[0];
    *menor = vet[0];

    for (i = 1; i < n; i++){
        if(*maior < vet[i]){
            *maior = vet[i];
        }
        if(*menor > vet[i]){
            *menor = vet[i];
        }
    }
}