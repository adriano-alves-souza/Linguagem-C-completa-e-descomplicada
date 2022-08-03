/*13) Faça um programa que leia um arquivo texto contendo os dados de um aluno. 
Cada linha do arquivo contém o número de matrícula,o nome e as notas de três provas de um aluno. 
Os dados devem ser lidos e armazenados em uma estrutura. Em seguida, exiba os dados lidos em tela.*/

#include <stdio.h>
#include <stdlib.h>

struct dados{
    int matricula;
    char nome[20];
    float notas[3];
}aluno;

int main(void){
    FILE *ptrArquivo;

    if((ptrArquivo = fopen("test3.txt","r")) == NULL){
        printf("Erro ao abrir oarquivo.\n");
        exit(1);
    }

    fscanf(ptrArquivo,"%d %s %f,%f,%f",&aluno.matricula,aluno.nome,&aluno.notas[0],&aluno.notas[1],&aluno.notas[2]);
    printf("Matricula: %d\t\t",aluno.matricula);
    printf("Nome: %s\t\t",aluno.nome);
    printf("Nota 1: %.1f, ",aluno.notas[0]);
    printf("Nota 2: %.1f, ",aluno.notas[1]);
    printf("Nota 3: %.1f\n",aluno.notas[2]);

    fclose(ptrArquivo);
    return 0;
}