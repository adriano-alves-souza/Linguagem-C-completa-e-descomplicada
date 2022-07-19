/*9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.*/

#include <stdio.h>
#include <string.h>
#define TAM 5

struct dados{
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
}atleta[TAM];

int main(void){
    int i;
    for(i = 0; i < TAM; i++){
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

    char nomeAlto[30], nomeVelho[30];
    strcpy(nomeAlto, atleta[0].nome);
    strcpy(nomeVelho, atleta[0].nome);
    float alto = atleta[0].altura;
    int velho = atleta[0].idade;

    for(i = 1; i < TAM; i++){
        if(alto < atleta[i].altura){
            alto = atleta[i].altura;
            strcpy(nomeAlto, atleta[i].nome);
        }
        if(velho < atleta[i].idade){
            velho = atleta[i].idade;
            strcpy(nomeVelho, atleta[i].nome);
        }
    }


    printf("Nome do atleta mais alto: %s\n", nomeAlto);
    printf("Nome do atleta mais velhos %s\n", nomeVelho);
    return 0;
}