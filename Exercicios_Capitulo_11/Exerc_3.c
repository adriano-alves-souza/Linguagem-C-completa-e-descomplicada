/*3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e 
retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. 
Solicite também que o usuário digite os dados desse vetor dentro da função.*/
#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30];
    int idade;
    char endereco[30];
};

struct cadastro *tamanho(int n);
void cadastroPessoa(struct cadastro *pessoa, int posicao);

int main(void){
    struct cadastro *ptrCadastro;
    int n = 2;

    ptrCadastro = tamanho(n);

    if(ptrCadastro == NULL){
        printf("ERRO!!!Memoria insuficiente.");
        exit(1);
    }
    
    cadastroPessoa(ptrCadastro, n);
    
    free(ptrCadastro);
    ptrCadastro = NULL;
    return 0;
}

struct cadastro *tamanho(int n){
    return (struct cadastro *)malloc(n*sizeof(struct cadastro));
}

void cadastroPessoa(struct cadastro *pessoa, int posicao){
    for (int i = 0; i < posicao; i++){
        printf("Nome: ");
        gets((pessoa+i)->nome);
        printf("Idade: ");
        scanf("%d", &(pessoa+i)->idade);
        setbuf(stdin, NULL);
        printf("Endereço: ");
        gets((pessoa+i)->endereco);
        printf("\n");
    }
}