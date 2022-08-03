/*2) Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um terceiro arquivo texto com o 
conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).*/

#include <stdio.h>
#include <stdlib.h>

void append(FILE *ptrArquivo, FILE *ptrArquivo3);

int main(void){

    FILE *ptrArquivo1,*ptrArquivo2,*ptrArquivo3;
    char nomeArquivo1[20],nomeArquivo2[20];
    
    printf("Digite o nome do arquivo 1: ");
    gets(nomeArquivo1);
    printf("Digite o nome do arquivo 2: ");
    gets(nomeArquivo2);

    if(((ptrArquivo1 = fopen(nomeArquivo1, "r")) == NULL) || ((ptrArquivo2 = fopen(nomeArquivo2, "r")) == NULL)){
        printf("Erro ao abrir o arquivo 1 ou 2.\n");
        exit(1);
    }

    if((ptrArquivo3 = fopen("test3.txt", "a+")) == NULL){
        printf("Erro ao abrir o arquivo 3.\n");
        exit(1);
    }
    append(ptrArquivo1,ptrArquivo3);
    append(ptrArquivo2,ptrArquivo3);

    fclose(ptrArquivo1);
    fclose(ptrArquivo2);
    fclose(ptrArquivo3);
    
    return 0;
}
void append(FILE *ptrArquivo, FILE *ptrArquivo3){
    char c[100];
    while(!feof(ptrArquivo)){
        fgets(c,100,ptrArquivo);
        fputs(c,ptrArquivo3);
    }
    fputc('\n',ptrArquivo3);
    fputc('\t',ptrArquivo3);
}