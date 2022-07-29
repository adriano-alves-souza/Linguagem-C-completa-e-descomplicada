/*5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.*/

#include <stdio.h>
#define TAMANHO 5

void entrada(int *vet, int tam);
void imprime(int *vet, int tam);

int main(void){
    int vet[TAMANHO];

    entrada(vet, TAMANHO);
    imprime(vet, TAMANHO);

    return 0;
}
void entrada(int *vet, int posicao){
    for(int i = 0; i < posicao; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }
}

void imprime(int *vet, int posicao){
    for(int i = 0; i < posicao; i++){
        printf("%d\n", *(vet+i) * 2);
    }
}