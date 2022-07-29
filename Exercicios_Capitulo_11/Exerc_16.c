/*16) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas, 
e um vetor B de tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N alocado 
dinamicamente, em que C é o produto da matriz A pelo vetor B.*/
#include <stdio.h>
#include <stdlib.h>
#define matAcol 10
#define matAlin 10
#define vetBtam 10

int *vetorC(int A[][matAcol], int linhas, int *B, int tamanho);

int main(void){
    int A[matAlin][matAcol];
    int B[vetBtam];

    int *C = vetorC(A,matAlin,B,vetBtam);
    return 0;
}

int *vetorC(int A[][matAcol], int linhas, int *B, int tamanho){
    int *C = (int *)malloc(tamanho*sizeof(int));

    for(int i = 0; i < linhas; i++){
        int soma = 0;
        for(int j = 0; j < matAcol; j++){
            soma += A[i][j] * B[i];
        }
        C[i] = soma;
    }
    return C;
}