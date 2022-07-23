/*15) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
usamos n = 5:
!
!!
!!!
!!!!
!!!!!
*/

#include <stdio.h>
void geralinhas(int n);

int main(void){
    int nLinhas;
    printf("Digite o numero de linhas: ");
    scanf("%d", &nLinhas);

    geralinhas(nLinhas);
    return 0;
}

void geralinhas(int n){
    int i,j;
    for(i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            printf("!");
        }
        printf("\n");        
    }
}