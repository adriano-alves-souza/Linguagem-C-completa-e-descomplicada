/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>
# define TAMANHO 8

void imprime(int *vet);

int main(void){
    int vet[TAMANHO] = {2};

    imprime(vet);
    return 0;
}

void imprime(int *vet){
    for(int i = 0; i < TAMANHO; i++){
            printf("%d\n", *(vet++));
    }
}