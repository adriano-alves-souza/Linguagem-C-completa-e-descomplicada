/*4) Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#define TAMANHO 3

void imprime(float *mat , int posicao);

int main(void){
    float matriz[TAMANHO][TAMANHO] = {{5.6,8.7,1.2},{3.3,4.5,1.9},{6.5,9.1,4.7}};

    imprime(&matriz[0][0] , TAMANHO*TAMANHO);

    return 0;
}

void imprime(float *mat , int posicao){
    if(posicao == 1){
        printf("%p\n", mat+(posicao-1));
    }else{
        imprime(mat, posicao - 1);
        printf("%p\n", mat+(posicao-1));
    }
}