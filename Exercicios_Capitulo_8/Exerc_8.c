/*8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/

#include <stdio.h>
#include <string.h>
#define TAM 6
struct dados{
    char nome[30];
    int dia,mes,ano;
}pessoa[TAM];
int main(void){
    int i;
    for(i = 0; i < TAM; i++){
        printf("Nome: ");
        gets(pessoa[i].nome);
        printf("Data de nascimento(dia/mes/ano): ");
        scanf("%d%d%d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
        setbuf(stdin,NULL);
    }

    
    int idades[TAM];
    int dia = 18;
    int mes = 07;
    int ano = 2022;
    int temp;
    for(i = 0; i < TAM; i++){
        temp = ano - pessoa[i].ano;
        if(temp == 0){
            idades[i] = 0;
        }else{
            if(pessoa[i].mes > mes){
                idades[i] = temp;
            }else if(pessoa[i].mes == mes){
                if(pessoa[i].dia >= dia){
                    idades[i] = temp;
                }else{
                    idades[i] = temp - 1;
                }
            }else{
                idades[i] = temp - 1;
            }
        }
    }

    char nomeN[30], nomeV[30];
    strcpy(nomeN,pessoa[0].nome);
    strcpy(nomeV,pessoa[0].nome);
    int maior = idades[0];
    int menor = idades[0];
    for(i = 1; i < TAM; i++){
        if(maior < idades[i]){
            strcpy(nomeV, pessoa[i].nome);
        }
        if(menor > idades[i]){
            strcpy(nomeN, pessoa[i].nome);
        }
    }

    printf("Nova: %s\n",nomeN);
    printf("Velha: %s\n",nomeV);
    return 0;
}