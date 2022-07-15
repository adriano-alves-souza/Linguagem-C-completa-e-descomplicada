/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array. Por exemplo, a matriz
5 −8 10
1 2 15
25 10 7
deverá gerar o vetor
31 4 32*/

#include <stdio.h>
#define TAMLIN 3
#define TAMCOL 3
int main(void){
    int i,j, mat[TAMLIN][TAMCOL];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    int vet[3],soma;
    for(i = 0; i < TAMCOL; i++){
        soma = 0;
        for(j = 0; j < TAMLIN; j++){
            soma += mat[j][i];
        }
        vet[i] = soma;
    }

    for(i = 0; i < TAMCOL; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}