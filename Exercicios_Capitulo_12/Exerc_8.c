/*8) Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e ano, isto é, três inteiros seguidos), 
escrever um programa que leia esse arquivo e a data atual e gere outro arquivo contendo o nome e a idade.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArquivo1,*ptrArquivo2;

    if((ptrArquivo1 = fopen("test1.txt","r")) == NULL || (ptrArquivo2 = fopen("test3.txt","w")) == NULL){
        printf("Erro ao abrir o arquivo 1 ou 2.\n");
        exit(1);
    }


    int dataAtual[3] = {2,8,2022};
    int dataArquivo[3];
    char nome[30];
    int idade;
    while((fscanf(ptrArquivo1,"%s %d/%d/%d",nome,&dataArquivo[0],&dataArquivo[1],&dataArquivo[2])) != -1){
        idade = dataAtual[2] - dataArquivo[2];
        if(dataAtual[1] < dataArquivo[1]){
            idade--;
        }else if(dataAtual[1] == dataArquivo[1]){
            if(dataAtual[0] < dataArquivo[0]){
                idade--;
            }
        }
        fprintf(ptrArquivo2,"Nome: %-20s Idade: %d\n",nome,idade);
    }

    fclose(ptrArquivo1);
    fclose(ptrArquivo2);
    return 0;
}