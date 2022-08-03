/*17) Elabore um programa que leia um arquivo binário contendo 100 números. Mostre na tela a soma desses números.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE * ptrArquivo;

    if((ptrArquivo = fopen("numeros.bin", "rb")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int num;
    int soma = 0;
    for(int i = 0; i < 100; i++){
        if((fread(&num,sizeof(int),1,ptrArquivo)) != 1){
            printf("Erro na leitura.\n");
            exit(1);
        }
        printf("%d = %d.\n",i+1,num);
        soma += num;
    }

    printf("A soma dos valores é %d.\n",soma);
    fclose(ptrArquivo);
    return 0;
}