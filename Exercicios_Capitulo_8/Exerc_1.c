/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.*/

#include <stdio.h>
struct cadastro{
    char nome[30];
    int idade;
    char endereco[50];
};
int main(void){
    struct cadastro dados;
   printf("Nome: ");
   gets(dados.nome);
   printf("Idade: ");
   scanf("%d", &dados.idade);
   setbuf(stdin,NULL);
   printf("Endereço: ");
   gets(dados.endereco);


   printf("\n\nNome: %s\nIdade: %d\nEndereço: %s\n",dados.nome,dados.idade,dados.endereco); 
    return 0;
}