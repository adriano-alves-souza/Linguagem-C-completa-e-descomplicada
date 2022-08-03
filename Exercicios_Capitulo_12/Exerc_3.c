/*3) Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. 
O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArq1,*ptrArq2;
    char nomeArquivoConv[20];
    char nomeArquivoSalv[20];

    printf("Digite o nome do arquivo a ser convertido: ");
    gets(nomeArquivoConv);
    setbuf(stdin,NULL);

    printf("Digite o nome do arquivo a ser salvo: ");
    gets(nomeArquivoSalv);

    if(((ptrArq1 = fopen("test1.txt", "r")) == NULL) || ((ptrArq2 = fopen("test3.txt", "w")) == NULL)){
        printf("Erro ao abrir o arquivo a ser lido.\n");
        exit(1);
    }

    char c;
    while(!feof(ptrArq1)){
        c = fgetc(ptrArq1);
        if(c != ' ' && c != '\n' && c != '.' && c != '!' && c != ',' && c != '?' && c != '\0'){
            fputc(c-32,ptrArq2);
        }else{
            fputc(c,ptrArq2);
        }
    }

    fclose(ptrArq1);
    fclose(ptrArq2);
    return 0;
}