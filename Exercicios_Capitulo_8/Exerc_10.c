/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.*/

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

    for(i = 0; i < TAM -1; i++){
        struct dados aux;
        for(int j = i+1; j < TAM; j++){
            if(atleta[i].idade < atleta[j].idade){
                aux = atleta[i];
                atleta[i] = atleta[j];
                atleta[j] = aux;
            }
        }
    }
    printf("\n");
    for(i = 0; i < TAM; i++){
        printf("Nome: %s\n",atleta[i].nome);
        printf("Esporte: %s\n",atleta[i].esporte);
        printf("Idade: %d\n",atleta[i].idade);
        printf("Altura: %f\n",atleta[i].altura);
        printf("\n");
    }
    return 0;
}