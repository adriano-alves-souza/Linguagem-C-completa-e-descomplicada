/*4) Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma palavra, e o programa informe 
o número de vezes que aquela palavra aparece dentro do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int contaPalavra(FILE *ptrArquivo, char *palavra);

int main(void){
    FILE *ptrArquivo;
    char texto[20], palavra[20];

    printf("Digite o nome do arquivo de texto: ");
    gets(texto);
    setbuf(stdin,NULL);
    printf("Digite a palavra a ser encontrada: ");
    gets(palavra);

    if((ptrArquivo = fopen(texto, "r")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    printf("A palavra %s aparece %d vezes no texto.\n",palavra, contaPalavra(ptrArquivo, palavra));

    fclose(ptrArquivo);
    return 0;
}

int contaPalavra(FILE *ptrArquivo, char *palavra){
    int tamanhoPalavra = strlen(palavra);
    int i = 0;
    char c = fgetc(ptrArquivo);
    int vezes = 0;

    while(!feof(ptrArquivo)){
        if(palavra[i] == c){
            c = fgetc(ptrArquivo);
            i++;
        }else{
            i = 0;
            if(palavra[i] == c){
                c = fgetc(ptrArquivo);
                i++;
            }
            else{
                c = fgetc(ptrArquivo);
            }
        }
        if(i == tamanhoPalavra){
            vezes++;
            i = 0;
        }
    }
    return vezes;
}