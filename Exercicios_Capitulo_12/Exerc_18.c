/*18) Crie um programa que leia um arquivo binário contendo uma quantidade qualquer de números. 
O primeiro número lido indica quantos valores existem no arquivo. Mostre na tela o maior e o menor valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * ptrArquivo;

    if((ptrArquivo = fopen("numeros.bin", "rb")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int tamanho;
    if((fread(&tamanho,sizeof(int),1,ptrArquivo)) != 1){
        printf("Erro ao ler o arquivo inicio.\n");
        exit(1);
    }
    
    int maior;
    if((fread(&maior,sizeof(int),1,ptrArquivo)) != 1){
        printf("Erro ao ler o arquivo maior menor.\n");
        exit(1);
    }

    int menor = maior;
    int num;
    for(int i = 0; i < tamanho-2; i++){
        if((fread(&num,sizeof(int),1,ptrArquivo)) != 1){
        printf("Erro ao ler o arquivo.\n");
        exit(1);
    }
        if(maior < num){
            maior = num;
        }
        if(menor > num){
            menor = num;
        }
    }
    
    printf("Maior valor lido: %d.\nMenor valor lido: %d.\n",maior,menor);
    return 0;
}