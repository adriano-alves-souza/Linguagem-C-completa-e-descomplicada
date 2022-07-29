/*2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura.*/
#include <stdio.h>
#include <stdlib.h>
struct dados{
    int numMatricula;
    char nome[30];
    float notas[3];
}aluno;
int main(void){
    printf("%d.\n",sizeof(aluno));
    
    return 0;
}