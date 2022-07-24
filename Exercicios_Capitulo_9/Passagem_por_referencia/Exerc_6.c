/*6) Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas.
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A,
então A[i][j] = B[j][i]).*/

#include <stdio.h>
#define LINHA 5
#define COLUNA 5

void transposta(int vet[][COLUNA], int n);

int main(void){
    int A[LINHA][COLUNA] = {{1,5,6,8,4},{7,3,1,8,9},{8,2,4,9,1},{5,2,1,6,7},{8,5,4,6,1}};
    transposta(A, LINHA);
    return 0;
}

void transposta(int vet[][COLUNA], int n){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < COLUNA; j++){
            printf("%d ", vet[j][i]);
        }
        printf("\n");
    }
}