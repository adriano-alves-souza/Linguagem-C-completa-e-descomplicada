/*12) Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a em um arquivo texto de nome “vetor.txt”. 
Cada valor do vetor deve ser salvo em uma linha do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

void salvaVetor(int vetor[], int tamanho);

int main(void){
    return 0;
}

void salvaVetor(int vetor[], int tamanho){
    FILE *ptrArquivo;
    if((ptrArquivo = fopen("vetor.txt", "w")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++){
        fprintf(ptrArquivo,"%d\n", vetor[i]);
    }
    fclose(ptrArquivo);
}