/*16) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do 
vetor e o número de vezes que esse elemento ocorreu no vetor.*/

#include <stdio.h>
#define MAX 13

void maior(int *vet, int n, int *maior, int *nVezes);

int main(void){
    int N[MAX];
    int maiorValor,nVezes;

    printf("Digite %d valores inteiros.\n", MAX);
    for(int i = 0; i < MAX; i++){
        printf("Valor %d: ",i+1);
        scanf("%d", &N[i]);
    }
    

    maior(N, MAX, &maiorValor, &nVezes);

    printf("%d é o maior valor do vetor N.\n", maiorValor);
    printf("Ele parece %d vezes.\n", nVezes);
    return 0;
}

void maior(int *vet, int n, int *maior, int *nVezes){
    int i;

    *maior = vet[0];
    *nVezes = 1;

    for (i = 1; i < n; i++){
        if(*maior < vet[i]){
            *maior = vet[i];
            *nVezes = 1;
        }else if(*maior == vet[i]){
            *nVezes += 1;
        }
    }
}