/*15) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. 
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] * B[i].*/
#include <stdio.h>
#include <stdlib.h>
int *vetor(int *A, int *B, int tamanho);

int main(void){
    int N = 10;
    int A[N];
    int B[N];
    int *C = vetor(A,B,N); 
    return 0;
}

int *vetor(int *A, int *B, int tamanho){
    int *C = (int *)malloc(tamanho*sizeof(int));
    for(int i = 0; i < tamanho; i++){
        C[i] = A[i] * B[i];
    }
    return C;
}