/*11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que estão acima da diagonal principal.*/

#include <stdio.h>
#define TAMLIN 5
#define TAMCOL 5

int main(void){
    int i,j, mat[TAMLIN][TAMCOL];
    
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int soma = 0;
    for(i = 0; i < TAMLIN; i++){
        for(j = i+1; j < TAMCOL; j++){
            soma += mat[i][j];
        }
    }

    printf("soma dos elementos acima da diagonal principal: %d\n",soma);
    return 0;
}