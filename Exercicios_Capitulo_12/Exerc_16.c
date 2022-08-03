/*16) Faça um programa que leia 100 números. Esse programa deverá, em seguida,
armazenar esses números em um arquivo binário.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * ptrArquivo;

    if((ptrArquivo = fopen("numeros.bin", "wb")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int num;
    for(int i = 0; i < 100; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &num);

        if((fwrite(&num,sizeof(int),1,ptrArquivo)) != 1){
            printf("Erro na gravação.\n");
            exit(1);
        }
    }
    fclose(ptrArquivo);
    return 0;
}