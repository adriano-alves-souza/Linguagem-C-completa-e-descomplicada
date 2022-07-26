/*6) Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros.*/

#include <stdio.h>
#define MAX 10

float Media(int *vet, int n);

int main(void){
    int vetor[MAX] = {10,10,10,10,10,10,10,10,10,10};

    printf("A media dos elementos do vetor é %f.\n", Media(vetor, MAX));

    return 0;
}

float Media(int *vet, int posicao){
    if(posicao == 0){
        return 0;
    }else if(posicao == MAX){
        return (vet[posicao - 1] +  Media(vet, posicao-1)) / MAX;
    }else{
        return vet[posicao - 1] +  Media(vet, posicao-1);
    }
}