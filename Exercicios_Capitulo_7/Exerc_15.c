/*15) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a
ordem em que elas apareceriam em um dicionário.*/

#include <stdio.h>
#define TAM 30
int main(void){
    char str1[TAM], str2[TAM];

    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);

    int control;
    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] < str2[i]){
            control = 1;
            break;
        }else if(str2[i] < str1[i]){
            control = 2;
            break;
        }
    }

    if(control == 1){
        puts(str1);
        puts(str2);
    }else if(control == 2){
        puts(str2);
        puts(str1);
    }
    else{
        puts(str1);
        puts(str2);
    }
    return 0;
}