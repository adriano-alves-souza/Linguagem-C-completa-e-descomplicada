/*4) Faça um programa que leia uma string e a imprima de trás para a frente.*/

#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char str[TAM];
    char str2[TAM];

    printf("Digite uma string: ");
    gets(str);

    for(int i = strlen(str)-1,j = 0; i >= 0; i--,j++){
        str2[j] = str[i];
    }

    puts(str2);
    return 0;
}