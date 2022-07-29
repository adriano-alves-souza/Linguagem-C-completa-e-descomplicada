/*8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro 
para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, 
um ponteiro nulo deverá ser retornado.*/
#include <stdio.h>
#include <stdlib.h>

int *vetor(int n);

int main(void){
    int n = 0;
    int *prtInt = vetor(n);

    if(prtInt == NULL){
        printf("ERRO!!!");
        exit(1);
    }

    free(prtInt);
    prtInt = NULL;
    
    return 0;
}

int *vetor(int n){
    return n > 0 ? malloc(n*sizeof(int)) : NULL;
}