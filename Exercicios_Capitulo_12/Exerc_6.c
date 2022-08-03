/*6) Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo possui nome, 
quantidade e valor unitário do produto. O programa então exibe o total da compra.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArquivo;

    if((ptrArquivo = fopen("test3.txt", "r")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    float preco;
    int quantidade;
    char s[30];
    float soma = 0;
    while((fscanf(ptrArquivo,"%s %d %f",s,&quantidade, &preco) != -1)){
        soma += quantidade * preco;
    }
    printf("total da compra = %.2fR$\n",soma);
    
    fclose(ptrArquivo);
    return 0;
}