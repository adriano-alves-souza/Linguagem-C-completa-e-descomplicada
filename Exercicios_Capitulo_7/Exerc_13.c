/*13) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. 
Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.*/

#include <stdio.h>
#define TAM 30
int main(void){
    char S[TAM];
    int i,j;

    printf("string: ");
    gets(S);

    printf("Digite dois inteiros não negativos: ");
    scanf("%d%d", &i,&j);

    for(; i <= j; i++){
        printf("%c\n",S[i]);
    }
    return 0;
}