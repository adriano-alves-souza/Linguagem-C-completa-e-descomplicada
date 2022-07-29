/*17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas. 
A função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, 
em que cada posição de B é a soma dos números daquela coluna da matriz.*/
#include <stdio.h>
#include <stdlib.h>
#define matAcol 10
#define matAlin 10

int *vetorB(int A[][matAcol], int linhas);

int main(void){
    int A[matAlin][matAcol];
    
    int *B = vetorC(A,matAlin);
    return 0;
}

int *vetorC(int A[][matAcol], int linhas){
    int *B = (int *)malloc(matAcol*sizeof(int));

    for(int i = 0; i < matAcol; i++){
        int soma = 0;
        for(int j = 0; j < linhas; j++){
            soma += A[j][i];
        }
        B[i] = soma;
    }
    return B;
}