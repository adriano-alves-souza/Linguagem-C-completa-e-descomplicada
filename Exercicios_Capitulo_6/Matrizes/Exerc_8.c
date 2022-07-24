/*8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i² – 1 se i = j
A[i][j] = 4i³ + 5j² + 1 se i > j*/

#include <stdio.h>
#include <math.h>
#define TAMLIN 10
#define TAMCOL 10

int main(void){
    int i,j, vet[TAMLIN][TAMCOL];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(i < j){
                vet[i][j] = (2 * i) + (7 * j) - 2;
            }else if(i == j){
                vet[i][j] = 3 * pow(i,2) - 1;
            }else{
                vet[i][j] = (4 * pow(i,3)) + (5 * pow(j,2) + 1);
            }
        }
    }

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("%d\t",vet[i][j]);
        }
        printf("\n");
    }
    return 0;
}