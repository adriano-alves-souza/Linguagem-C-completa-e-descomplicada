/*3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela.*/

#include <stdio.h>
#define TAMLIN 5
#define TAMCOL 5
int main(void){
    int i, j, vet[TAMLIN][TAMCOL];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(i == j){
                vet[i][j] = 1;
                continue;
            }
            vet[i][j] = 0;
        }
    }

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
    return 0;
}