/*14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.*/

#include <stdio.h>
#define TAMLIN 5
#define TAMCOL 5

int main(void){
    int i, j, mat[TAMLIN][TAMCOL];
    
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            printf("Valores: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int somaDiago = 0;
    int somaResto = 0;
    for(i = 0; i < TAMLIN; i++){
        for(j = 0; j < TAMCOL; j++){
            if(i == j){
                somaDiago += mat[i][j];
            }
            else if(!(j == (TAMCOL - 1) -i)){
                somaResto += mat[i][j];
            }
        }
    }

    int total = somaResto - somaDiago;
    printf("Diferença = %d\n",total);
    return 0;
}