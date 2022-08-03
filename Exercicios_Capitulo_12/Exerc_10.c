/*10) Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros números são as dimensões 
da matriz (linhas e colunas), enquanto o restante dos números são os valores de cada elemento da matriz. Escreva uma 
função que receba o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente contendo os valores 
lidos do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int **matriz(FILE *ptrArquivo);
int main(void){

    return 0;
}

int **matriz(FILE *ptrArquivo){
    int linhas,colunas;
    fscanf(ptrArquivo,"%d,%d",&linhas,&colunas);

    int **mat = (int**)malloc(linhas*sizeof(int*));
    for(int i = 0; i < linhas; i++){
        mat[i] = (int *)malloc(colunas*sizeof(int));
        for(int j = 0; j < colunas; j++){
            fscanf(ptrArquivo,",%d",&mat[i][j]);
        }
    }

    return mat;
}