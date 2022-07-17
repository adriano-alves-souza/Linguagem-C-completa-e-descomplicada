/*7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char str[TAM];

    printf("Digite uma string: ");
    gets(str);

    int num = (strlen(str) - 1);
    int flag = 0;
    for(int i = 0, j = num; i <= num / 2; i++, j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("%s é um palindromo.\n",str);
    }else{
        printf("%s não é um palindromo.\n",str);
    }
    return 0;
}