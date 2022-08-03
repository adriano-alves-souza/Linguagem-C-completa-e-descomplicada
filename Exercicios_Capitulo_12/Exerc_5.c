/*5) Faça um programa que leia números positivos e os converta em binário. Cada número binário deverá ser salvo em 
uma linha de um arquivo texto. O programa termina quando o usuário digitar um número negativo.*/

#include <stdio.h>
#include <stdlib.h>

void salvaBinario(FILE *ptrArquivo, int num);

int main(void){

    FILE *ptrArquivo;

    if((ptrArquivo = fopen("test3.txt", "w"))== NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int num = 1;
    while(num >= 0){
        printf("Digite numeros positivos: ");
        scanf("%d", &num);
        if(num >= 0){
            salvaBinario(ptrArquivo, num);
            fputc('\n',ptrArquivo);
        }
    }

    fclose(ptrArquivo);
    return 0;
}

void salvaBinario(FILE *ptrArquivo, int num){
    if(num <= 1){
        fprintf(ptrArquivo,"%d",num%2);
    }else{
        salvaBinario(ptrArquivo, num/2);
        fprintf(ptrArquivo,"%d",num%2);
    }
}