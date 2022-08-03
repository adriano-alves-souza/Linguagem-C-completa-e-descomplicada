/*15) Elabore um programa para calcular e exibir o número de vezes que cada letra ocorre dentro de um arquivo texto. 
Ignore as letras com acento. O usuário deverá informar o nome do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptrArquivo;
    char nomeArquivo[20];

    printf("Digite o nome do arquivo: ");
    gets(nomeArquivo);

    if((ptrArquivo = fopen(nomeArquivo,"r")) == NULL){
        printf("Erro ao abrir oarquivo.\n");
        exit(1);
    }

    int contaLetras[26] = {0};
    char letrasMinu[] = "abcdefghijklmnopqrstuvwxyz";
    char c;

    while(!feof(ptrArquivo)){
        c = fgetc(ptrArquivo);
        for(int i = 0; i < 26; i++){
            if(c == letrasMinu[i] || c == (letrasMinu[i]-32)){
                contaLetras[i]++;
            }
        }
    }

    fclose(ptrArquivo);

    for(int i = 0; i < 26; i++){
        if(contaLetras[i] != 0){
            printf("%c = %d vezes.\n",letrasMinu[i]-32,contaLetras[i]);
        }
    }
    
    return 0;
}