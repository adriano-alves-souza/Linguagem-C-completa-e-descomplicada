/*12) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.*/
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
    for(int i = 0; i < posicao; i++){
        for(int j = 0; j < posicao; j++){
            if(j == (posicao - 1) -i){
                ptrM[i][j] = 1;
            }else{
                ptrM[i][j] = 0;
            }
        }
    }
}

int  **ptrCriaMatriz(int n){
    int **ptr;

    ptr = (int **)malloc(n*sizeof(int *));
    for(int i = 0; i < n; i++){
        ptr[i] = (int *)malloc(n*sizeof(int));
    }
    return ptr;
}