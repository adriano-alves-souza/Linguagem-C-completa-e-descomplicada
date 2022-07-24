/*7) Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e
retorne a soma dos seus elementos.*/

#include <stdio.h>
#define MAX 10
int soma(int vet[][MAX], int n);
int main(void){
    int A[MAX][MAX];

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            printf("Valor [%d][%d]: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("A soma dos elementos é %d\n",soma(A,MAX));
    
    return 0;
}

int soma(int vet[][MAX], int n){
    int i,j;
    int soma = 0;
    for(i = 0; i < n; i++){
        for (j = 0; j < MAX; j++){
            soma += vet[i][j];
        }
    }
    return soma;
}