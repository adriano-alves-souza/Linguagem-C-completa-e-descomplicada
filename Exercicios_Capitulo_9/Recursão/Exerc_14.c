/*14) Crie uma função recursiva que retorne o menor elemento em um vetor.*/

#include <stdio.h>
#define TAMANHO 10

int menor(int *vet, int posicao, int menorV);

int main(void){
    int vetor[TAMANHO] = {115,23,37,42,55,65,72,84,98,150};
    int m = vetor[0];    

    printf("O menor elemento é %d.\n",menor(vetor, TAMANHO,m));
    return 0;
}

int menor(int *vet, int posicao, int menorV){

    if(posicao == 0){
        return menorV;
    }else if(menorV > vet[posicao - 1]){
        menorV = vet[posicao - 1];
    }
    return menor(vet, posicao -1,menorV);
}