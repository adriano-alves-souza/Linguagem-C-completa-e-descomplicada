/*7) Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro. 
Crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada com o valor 0 para o telefone.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArquivo;

    if((ptrArquivo = fopen("test3.txt", "w")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char nome[30];
    int telefone;
    do{
        printf("Digite o nome: ");
        gets(nome);
        printf("Digite o telefone: ");
        scanf("%d",&telefone);
        setbuf(stdin,NULL);
        if(telefone != 0){
            fprintf(ptrArquivo,"Nome: %s-------Telefone:%d\n",nome,telefone);
        }
    }while(telefone != 0);
    
    fclose(ptrArquivo);
    return 0;
}