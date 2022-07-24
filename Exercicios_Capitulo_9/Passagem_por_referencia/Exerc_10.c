/*10) Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <string.h>

int palindromo(char *vet, int n);
int main(void){
    char string[40];

    printf("Digite uma string: ");
    fgets(string, 40, stdin);

    palindromo(string, strlen(string)-1) == 1? printf("%s é um palindromo.\n",string): printf("%s não é um palindromo.\n",string);
    return 0;
}

int palindromo(char *vet, int n){
    int i;

    for(i = 0; i < (n/2); i++){
        if(vet[i] != vet[n-1-i]){
            return 0;
        }
    }
    return 1;
}