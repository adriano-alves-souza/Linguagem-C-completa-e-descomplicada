/*9) Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne quantas vogais esse arquivo possui.*/

#include <stdio.h>
#include <stdlib.h>

int contaVogal(FILE *ptrArquivo);

int main(void){
    return 0;
}

int contaVogal(FILE *ptrArquivo){
    char c;
    int contVogal = 0;
    char vogais[] = "aAeEiIoOuU";
    while(!feof(ptrArquivo)){
        c = fgetc(ptrArquivo);
        for(int i = 0; i < 10; i++){
            if(c == vogais[i]){
                contVogal++;
                break;
            }
        }
    }
    return contVogal;
}