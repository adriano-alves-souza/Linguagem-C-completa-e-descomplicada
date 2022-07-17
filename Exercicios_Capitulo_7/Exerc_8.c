/*8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <string.h>
#define TAM 300

int main(void){
    char str1[TAM], str2[TAM];

    printf("1 string: ");
    gets(str1);

    printf("2 string: ");
    gets(str2);

    int i = 0,j = 0, cont = 0,flag = 0;
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    while (str2[i] != '\0'){
        while (str1[j] != '\0'){
            if(str2[i] == str1[j]){
                cont++;
                i++;
            }else{
                if(cont == tamanho2){
                    flag = 1;
                    break;
                }
                i = 0;
                cont = 0;
            }
            j++;
        }
        if(j == tamanho1 || flag == 1){
            break;
        }
    }
    if(cont == tamanho2){
        printf("%s esta dentro de %s\n",str2,str1);
    }else{
        printf("%s não esta dentro de %s\n",str2,str1);
    }
    return 0;
}