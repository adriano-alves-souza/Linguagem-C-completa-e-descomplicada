/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/

#include <stdio.h>
#define TAMLIN 4
#define TAMCOL 4
int main(void){
    int i,j, vet[TAMLIN][TAMLIN];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &vet[i][j]);
        }
    }

    int maior = vet[0][0];
    int linha = 0;
    int coluna = 0;
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(maior < vet[i][j]){
                maior = vet[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior valor contido na matri: %d.\nLocalização:\nlinha: %d.\nColuna: %d.\n",maior,linha,coluna);
    return 0;
}