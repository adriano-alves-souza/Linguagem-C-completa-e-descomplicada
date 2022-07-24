/*13) Crie uma função que receba um vetor de tamanho N e ordene os seus valores.*/

#include <stdio.h>
#define MAX 10

void ordena(int *vet, int n);

int main(void){
    int N[MAX];

    printf("Digite %d valores.\n",MAX);
    for(int i = 0; i < MAX; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &N[i]);
    }

    ordena(N, MAX);
    printf("\n");
    for(int i = 0; i < MAX; i++){
        printf("%d ", N[i]);
    }
    return 0;
}

void ordena(int *vet, int n){
    int aux,i,j;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++ ){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}