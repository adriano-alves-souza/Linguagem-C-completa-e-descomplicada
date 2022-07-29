/*13) Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas 
e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos elementos acima da 
diagonal principal e o valor −1 nos elementos abaixo da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>

int **ptrCriaMatriz(int n);
void preencheMatriz(int **ptrM, int tamanho);

int main(void){
    int n = 10;
    int **ptrM = ptrCriaMatriz(n);
    preencheMatriz(ptrM, n);


    for(int i = 0; i < n; i++){
        free(ptrM[i]);
    }
    free(ptrM);
    ptrM = NULL;
    return 0;
}

void preencheMatriz(int **ptrM, int posicao){
    int i ,j;
    for(i = 0; i < posicao; i++){
        ptrM[i][i] = 0;
    }

    for(i = 0; i < posicao; i++){
        for(j = i+1; j < posicao; j++){
            ptrM[i][j] = 1;
        }
    }

    for(i = 1; i < posicao; i++){
        for(j = 0; j < i; j++){
            ptrM[i][j] = -1;
        }
    }
}

int  **ptrCriaMatriz(int n){
    int **ptr, i;

    ptr = (int **)malloc(n*sizeof(int *));
    for(i = 0; i < n; i++){
        ptr[i] = (int *)malloc(n*sizeof(int));
    }
    return ptr;
}