/*20) Considerando a estrutura atleta do exercício anterior, escreva um programa que leia um arquivo binário 
contendo os dados de cinco atletas. Calcule e exiba o nome do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUATIDADE_ATLETAS 5
struct dados{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
}atleta[QUATIDADE_ATLETAS];

int main(void){
    FILE *ptrArquivo;

    if((ptrArquivo = fopen("atleta.bin", "rb")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    if((fread(&atleta,sizeof(atleta),QUATIDADE_ATLETAS,ptrArquivo)) != QUATIDADE_ATLETAS){
        printf("Erro ao ler oarquivo.\n");
        exit(1);
    }
    fclose(ptrArquivo);

    char nomeAlto[20]; strcpy(nomeAlto,atleta[0].nome);
    char nomeVelho[20]; strcpy(nomeVelho,atleta[0].nome);
    int idadeMaisVelho = atleta[0].idade;
    int alturaMaisAlto = atleta[0].altura;
    for(int i = 1; i < QUATIDADE_ATLETAS; i++){
        if(idadeMaisVelho < atleta[i].idade){
            idadeMaisVelho = atleta[i].idade;
            strcpy(nomeVelho,atleta[i].nome);
        }
        if(alturaMaisAlto < atleta[i].altura){
            alturaMaisAlto = atleta[i].altura;
            strcpy(nomeAlto,atleta[i].nome);
        }
    }

    printf("Nome do atleta mais alto: %s.\nNome do atleta mais velho: %s.\n",nomeAlto,nomeVelho);
    
    return 0;
}