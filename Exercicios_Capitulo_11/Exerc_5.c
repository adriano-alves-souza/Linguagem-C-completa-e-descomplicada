/*5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.*/
#include <stdio.h>
#include <stdlib.h>

void insert(int valor, int *posicao, int *vetor);

int main(void){
    int tamanho;

    do{
        printf("Digite um numero inteiro não negativo: ");
        scanf("%d", &tamanho);
    }while(!(tamanho >= 0));

    int *ptrVetor = (int *)malloc(tamanho*sizeof(int));

    if(ptrVetor == NULL){
        printf("ERRO! Mememoria insuficiente.\n");
        exit(1);
    }

    int i = 0;
    int num;
    while(i < tamanho){
        printf("Digite numero maior ou igual a 2: ");
        scanf("%d", &num);
        insert(num, &i, ptrVetor);
    }

    free(ptrVetor);
    ptrVetor = NULL;
    return 0;
}

void insert(int valor, int *posicao, int *vetor){
    if(valor >= 2){
        vetor[*posicao] = valor;
        (*posicao)++;
    }else{
        printf("ERRO! Digite um valor maior ou igual a dois.\n");
    }
}