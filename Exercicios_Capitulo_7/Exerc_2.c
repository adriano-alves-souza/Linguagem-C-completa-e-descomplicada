/*2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/

#include <stdio.h>
#define TAM 30

int main(void){
    char str[TAM];

    printf("Digite uma string: ");
    fgets(str,TAM,stdin);

    for(int i  = 0; i < 4; i++){
        putchar(str[i]);
        //printf("%c,",str[i]);
    }
    return 0;
}