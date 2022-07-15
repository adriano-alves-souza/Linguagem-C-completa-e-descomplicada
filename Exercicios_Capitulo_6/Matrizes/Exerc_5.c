/*5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.*/

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

    int contNega = 0;
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(vet[i][j] < 0){
                contNega++;
            }
        }
    }

    printf("a matriz possui %d valores negativos.\n",contNega);
    return 0;
}