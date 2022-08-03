/*14) Crie um programa para calcular e exibir o número de palavras contido em um arquivo texto. 
O usuário deverá informar o nome do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArquivo;

    char nomeArquivo[20];

    printf("Digite o nome do arquivo: ");
    gets(nomeArquivo);

    if((ptrArquivo = fopen(nomeArquivo,"r")) == NULL){
        printf("Erro ao abrir oarquivo.\n");
        exit(1);
    }

    char palavra[30];
    int contaPalavra = 0;
    while((fscanf(ptrArquivo,"%s",palavra) != -1)){
        contaPalavra++;
    }
    
    printf("O texto tem %d palavras.\n",contaPalavra);
    fclose(ptrArquivo);
    return 0;
}