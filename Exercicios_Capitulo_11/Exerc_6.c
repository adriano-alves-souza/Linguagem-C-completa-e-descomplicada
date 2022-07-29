/*6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. 
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário.*/
#include <stdio.h>
#include <stdlib.h>

int busca(int n, int *ptrMatriz, int linha, int coluna);

int main(void){
    int linha, coluna;

    printf("Digite o numero de  linhas e colunas: ");
    scanf("%d%d", &linha, &coluna);

    int *ptrMatriz = (int *)malloc(linha*coluna*sizeof(int));

    if(ptrMatriz == NULL){
        printf("ERRO! Memoria insuficiente.\n");
        exit(1);
    }

    int num;

    printf("%d.\n", busca(num, ptrMatriz, linha, coluna));

    free(ptrMatriz);
    ptrMatriz = NULL;
    return 0;
}

int busca(int n, int *ptrMatriz, int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(n == ptrMatriz[i + coluna + j]){
                return 0;
            }
        }
    }
    return 1;
}