/*5) Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/

#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char str[TAM];

    printf("Digite uma string: ");
    gets(str);

    char aux;
    int j = strlen(str)-1;
    for(int i = 0; i <= j/2; i++){
        aux = str[i];
        str[i] = str[j-i];
        str[j-i] = aux;
    }

    puts(str);
    return 0;
}