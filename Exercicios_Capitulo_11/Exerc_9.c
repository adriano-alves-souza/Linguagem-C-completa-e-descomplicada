/*9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *invertString(char *string);

int main(void){
    char string[] = "Linguagem-C-completa-e-descomplicada";
    char *ptrString = invertString(string);

    return 0;
}

char *invertString(char *string){
    int tam = strlen(string), i;
    char *inverso = malloc(tam*sizeof(char));

    for(int i = 0; string[i] != '\0'; i++){
        inverso[i] = string[(tam-1)-i];
    }

    inverso[tam] = '\0';
    return inverso;
}