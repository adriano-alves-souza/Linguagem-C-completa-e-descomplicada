/*7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária.*/

#include <stdio.h>
#define TAMLIN 3
#define TAMCOL 3
int main(void){
    int i,j, vet[TAMLIN][TAMCOL];

    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores[%d][%d]: ",i,j);
            scanf("%d", &vet[i][j]);
        }
    }
    
    int soma = 0;
    for(i = 0; i < TAMLIN; i++){
        soma += vet[i][(TAMCOL-1)-i];
    }

    printf("Soma dos valores na diagonal secundaria %d\n",soma);
    return 0;
}