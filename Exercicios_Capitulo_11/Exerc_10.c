/*10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de 
tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos preenchidos com certo valor, também passado por
parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/
#include <stdio.h>
#include <stdlib.h>

int *vetor(int n, int valor);

int main(void){

    return 0;
}

int *vetor(int n, int valor){
    if(n <= 0){
        return NULL;
    }
    int *ptrVetor = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        ptrVetor[i] = valor;
    }
    return ptrVetor;
}