/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, 
faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int tamanho;
    int *ptrVetor = NULL;
    printf("Numero de dados do vetor: ");
    scanf("%d", &tamanho);

    ptrVetor = (int *)malloc(tamanho*sizeof(int));
    if(ptrVetor == NULL){
        printf("ERRO!!!Memoria insuficiente.");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++){
        printf("Valor %d: ",i+1);
        scanf("%d", &ptrVetor[i]);
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d ", ptrVetor[i]);
    }

    free(ptrVetor);
    ptrVetor = NULL;
    return 0;
}