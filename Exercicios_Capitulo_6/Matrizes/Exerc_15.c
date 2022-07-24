/*15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A².*/

#include <stdio.h>
#define TAMLIN 5
#define TAMCOL 5

int main(void){
    int i, j, A[TAMLIN][TAMCOL],B[TAMLIN][TAMCOL];
    
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            B[i][j] = A[i][j] * A[i][j];
        }
    }

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}