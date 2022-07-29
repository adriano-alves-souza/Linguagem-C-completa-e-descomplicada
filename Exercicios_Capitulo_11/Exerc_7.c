/*7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.*/
#include <stdio.h>
#include <stdlib.h>

int *vetor(int n);
void preenche(int *vet, int tam);

int main(void){
    int n = 10;
    int *prtInt = vetor(n);

    if(prtInt == NULL){
        printf("ERRO!!!");
        exit(1);
    }

    preenche(prtInt, n);

    free(prtInt);
    prtInt = NULL;
    
    return 0;
}

void preenche(int *vet, int tam){
    for(int i = 0; i < tam; i++){
        vet[i] = i;
    }
}

int *vetor(int n){
    return malloc(n*sizeof(int));
}