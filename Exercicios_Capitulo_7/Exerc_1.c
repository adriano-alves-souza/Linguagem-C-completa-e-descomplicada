/*1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>
#define TAM 30

int main(void){
    char str[TAM];

    printf("Digite um string: ");
    //gets(str);
    fgets(str, TAM, stdin);

    //printf("%s\n", str);
    puts(str);
    return 0;
}