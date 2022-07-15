/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.*/

#include <stdio.h>
#define TAMLIM 3
#define TAMCOL 3 

int main(void){
    int i,j, vet[TAMLIM][TAMCOL];
    
    for(i = 0; i < TAMLIM; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores[%d][%d]: ",i,j);
            scanf("%d", &vet[i][j]);
        }
    }

    int menor = vet[0][0];
    for(i  = 0; i < TAMLIM; i++){
        for(j = 0; j < TAMCOL; j++){
            if(menor > vet[i][j]){
                menor = vet[i][j];
            }
        }
    }

    printf("Menor valor contido na matriz %d\n", menor);
    return 0;
}