/*8) Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
sua diagonal principal e da sua diagonal secundária.*/

#include <stdio.h>
#define MAX 6

void soma(int A[][MAX], int n, int *principal, int *secundaria);

int main(void){
    int A[MAX][MAX] = {{1,5,6,8,4,7},{7,3,1,8,9,2},{8,2,4,9,1,5},{5,2,1,6,7,4},{8,5,4,6,1,9},{9,6,2,3,4,5}};
    int principal,secundaria;
    soma(A,MAX,&principal,&secundaria);
    printf("Soma da diagonal principal = %d\nSoma da diagonal secundaria = %d\n", principal,secundaria);
    return 0;
}

void soma(int A[][MAX], int n, int *principal, int *secundaria){
    int i;
    *principal = 0;
    for(i = 0; i < MAX; i++){
        *principal += A[i][i];
    }

    *secundaria = 0;
    for(i = 0; i < MAX; i++){
        *secundaria += A[i][(MAX-1) - i];
    }
}