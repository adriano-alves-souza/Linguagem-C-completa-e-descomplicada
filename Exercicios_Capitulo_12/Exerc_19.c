/*19) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, 
idade e altura. Agora, escreva um programa que leia os dados de cinco atletas e os armazene em um arquivo binário.*/

#include <stdio.h>
#include <stdlib.h>
#define QUATIDADE_ATLETAS 5

struct dados{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
}atleta[QUATIDADE_ATLETAS];

int main(void){
    FILE *ptrArquivo;

    if((ptrArquivo = fopen("atleta.bin", "wb")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for(int i = 0; i < QUATIDADE_ATLETAS; i++){
        printf("Nome: ");
        gets(atleta[i].nome);
        printf("Esporte: ");
        gets(atleta[i].esporte);
        printf("Idade: ");
        scanf("%d", &atleta[i].idade);
        printf("Altura: ");
        scanf("%f", &atleta[i].altura);
        setbuf(stdin,NULL);
    }
    
    if((fwrite(&atleta,sizeof(atleta),QUATIDADE_ATLETAS,ptrArquivo)) != QUATIDADE_ATLETAS){
        printf("Erro ao gravar o arquivo.\n");
        exit(1);
    }

    fclose(ptrArquivo);
    return 0;
}