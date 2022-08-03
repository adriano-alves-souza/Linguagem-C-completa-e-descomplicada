/*1) Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, 
mostre na tela quantas linhas esse arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>

int contaLinhas(FILE *ptrArquivo);

int main(void){
    FILE *ptrArquivo;
    char nomeArquivo[20];

    printf("Digite o nome do arquivo: ");
    gets(nomeArquivo);

    if((ptrArquivo = fopen(nomeArquivo, "r")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    printf("O arquivo possui %d linhas.\n",contaLinhas(ptrArquivo));
    fclose(ptrArquivo);
    return 0;
}

int contaLinhas(FILE *ptrArquivo){
    int contaLinha = 0;
    char c;
    while(!feof(ptrArquivo)){
        c = getc(ptrArquivo);
        if(c == '\n'){
            contaLinha++;
        }
    }
    return contaLinha+1;
}