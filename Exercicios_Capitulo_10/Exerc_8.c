/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>
# define TAMANHO 8

void preenche(int *vet, int n);

int main(void){
    int vet[TAMANHO];

    preenche(vet,5);
    return 0;
}

void preenche(int *vet, int n){
    for (int i = 0; i < TAMANHO; i++){
        *vet++ = n;
    }
}