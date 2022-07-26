/*5) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/

#include <stdio.h>
#define MAX 13

int soma(int *vet, int n);

int main(void){
    int vetor[MAX] = {10,10,10,10,10,10,10,10,10,10,55,60,2};

    printf("A soma dos elementos do vetor é %d.\n", soma(vetor, MAX));
    return 0;
}

int soma(int *vet, int posicao){
    if(posicao == 0){
        return 0;
    }else{
        return vet[posicao - 1] + soma(vet,posicao-1);
    }
}