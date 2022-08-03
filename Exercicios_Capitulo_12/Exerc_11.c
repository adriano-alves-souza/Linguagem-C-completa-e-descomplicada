/*11) Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a em um arquivo texto de nome “matriz.txt”’. 
Cada linha da matriz deve ser salva em uma linha do arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#define COLUNA 5
void salvaMatriz(int matriz[][COLUNA], int linha);

int main(void){

    return 0;
}
void salvaMatriz(int matriz[][COLUNA], int linha){
    FILE *ptrArquivo;
    if((ptrArquivo = fopen("matriz.txt", "w")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < COLUNA; j++){
            fprintf(ptrArquivo,"%d ", matriz[i][j]);
        }   
        fputc('\n',ptrArquivo);
    }
    fclose(ptrArquivo);
}