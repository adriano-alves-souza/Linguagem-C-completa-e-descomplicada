/*4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui.*/

#include <stdio.h>
#define TAMLIN 4
#define TAMCOL 4
int main(void){
    int i,j, vet[TAMLIN][TAMCOL];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &vet[i][j]);
        }
    }

    int cont10 = 0;
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(vet[i][j] > 10){
                cont10++;
            }
        }
    }

    printf("a matriz possui %d valores maiores que 10.\n",cont10);
    return 0;
}