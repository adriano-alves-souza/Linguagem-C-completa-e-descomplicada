/*18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus tamanhos. 
A função deve retornar o ponteiro para uma matriz C, em que C é o produto da multiplicação da matriz 
A pela matriz B. Se a multiplicação das matrizes não for possível, retorne um ponteiro nulo.*/
#include <stdio.h>
#include <stdlib.h>
int **A(int Lin, int Col);
int **B(int Lin, int Col);
int **mult(int **a, int aLinhas, int aColunas, int **b, int bLinhas, int bColunas);

int main(void){
    int aLinhas = 5, bLinhas = 6;
    int aColunas = 5, bColunas = 6;
    int **ptrA = A(aLinhas,aColunas);
    int **ptrB = B(bLinhas,bColunas);
    int **C = mult(ptrA,aLinhas,aColunas, ptrB,bLinhas,bColunas);

    if(C == NULL){
        printf("ERRO!!!");
    }

    return 0;
}

int **A(int Lin, int Col){
    int **ptrA = (int *)malloc(Lin*sizeof(int *));
    for (int i = 0; i < Lin; i++){
        ptrA[i] = (int *)malloc(Col*sizeof(int ));
    }
    return A;
}

int **B(int Lin, int Col){
    int **ptrB = (int *)malloc(Lin*sizeof(int *));
    for (int i = 0; i < Lin; i++){
        ptrB[i] = (int *)malloc(Col*sizeof(int ));
    }
    return B;
}

int **mult(int **a, int aLinhas, int aColunas, int **b, int bLinhas, int bColunas){
    if(aColunas != bLinhas){
        return NULL;
    }
    int **C = (int *)malloc(aLinhas*sizeof(int*));
    for(int i = 0; i < aLinhas; i++){
        C[i] = (int *)malloc(bColunas*sizeof(int));
        for (int j = 0; j < bColunas; j++){
            int soma = 0;
            for(int k = 0; k < aLinhas; k++){
                soma += a[aLinhas][k] * b[k][bColunas];
            }
            C[i][j] = soma;
        }
    }
    return C;
}