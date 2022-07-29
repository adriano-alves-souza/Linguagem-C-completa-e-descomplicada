/*3) Crie um programa que contenha um array de float contendo 10 elementos. 
Imprima o endereço de cada posição desse array.*/

#include <stdio.h>
#define TAMANHO 10

void print(float *vet, int n);

int main(void){
    float vetor[TAMANHO] = {5.6,2.8,7.4,8.2,1.9,8.4,7.5,2.3,8.5,7.7};

    print(vetor, TAMANHO);
    return 0;
}

void print(float *vet, int n){
    if(n == 1){
        printf("%d = %p\n",n-1, vet+(n-1));
    }else{
        print(vet, n-1);
        printf("%d = %p\n",n-1, vet+(n-1));
    }
}