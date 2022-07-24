/*9) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
Essa função deve retornar o índice do aluno que possui a maior média geral entre
todos os alunos.*/

#include <stdio.h>
#define MAX 3

struct dados{
    int numMatricula;
    char nome[30];
    float notas[3];
}aluno[MAX];

int indiceAluno(struct dados *vet, int n);
float media(float *vet, int n);

int main(void){
    int i,j;

    for(i = 0; i < MAX; i++){
        printf("Aluno %d.\n",i+1);
        printf("Matricula: ");
        scanf("%d", &aluno[i].numMatricula);
        setbuf(stdin, NULL);
        printf("Nome: ");
        fgets(aluno[i].nome, 30, stdin);
        for(j = 0; j < 3; j++){
            printf("Nota %d: ",j+1);
            scanf("%f", &aluno[i].notas[j]);
        }
    }

    int indiceMaiorMedia = indiceAluno(aluno,MAX);
    printf("Indice do aluno com a maior media %d.\n",indiceMaiorMedia);
    return 0;
}

float media(float *vet, int n){
    int i;
    float soma = 0;
    for(i = 0; i < n; i++){
        soma += vet[i];
    }
    return soma / n;
}

int indiceAluno(struct dados *vet, int n){
    int i;
    float resu;

    float maior = media(vet[0].notas, 3);
    int indice = 0;

    for(i = 1; i < n; i++){
        resu = media(vet[i].notas, 3);
        if(maior < resu){
            maior = resu;
            indice = i;
        }
    }

    return indice;
}