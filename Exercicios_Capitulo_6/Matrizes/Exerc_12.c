/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>
#define TAMLIN 6
#define TAMCOL 6

int main(void){
    int i,j, mat[TAMLIN][TAMCOL];
    
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int soma = 0;
    for(i = 0; i < TAMCOL; i++){
        for(j = i+1; j < TAMLIN; j++){
            soma += mat[j][i];
        }
    }

    printf("soma dos elementos abaixo da diagonal principal: %d\n",soma);
    return 0;
}