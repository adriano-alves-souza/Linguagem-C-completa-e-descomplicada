/*3) Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.*/

#include <stdio.h>
#define TAM 30
int main(void){
    char str[TAM];

    printf("Digite uma string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    printf("%s tem %d caracteres.%d\n",str,i);
    return 0;
}