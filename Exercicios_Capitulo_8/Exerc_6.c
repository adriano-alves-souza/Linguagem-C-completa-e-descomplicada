/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/

#include <stdio.h>
#define TAM 5
struct dados{
    int matricula;
    char nome[30];
    float notas[3];
};
int main(void){
    struct dados aluno[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Aluno %d. Matricula: ",i+1);
        scanf("%d", &aluno[i].matricula);
        setbuf(stdin,NULL);
        printf("Aluno %d. Nome: ",i+1);
        gets(aluno[i].nome);
        for(int j = 0; j < 3; j++){
            printf("Aluno %d. Nota %d: ",i+1, j+1);
            scanf("%f", &aluno[i].notas[j]);
        }
    }

    int posi;
    float soma,maior,media;
    for(int i = 0; i < TAM; i++){
        soma = 0;
        for(int j = 0; j < 3; j++){
            soma += aluno[i].notas[j];
        }
        media = soma / 3.0;
        if(i == 0){
            maior = media;
            posi = i;
        }else{
            if(maior < media){
                maior = media;
                posi = i;
            }
        }
    }

    printf("Nome: %s\n", aluno[posi].nome);
    printf("Notas:\n");
    for(int i = 0; i < 3; i++){
        printf("nota %d: %f\n",i+1,aluno[posi].notas[i]);
    }
    return 0;
}