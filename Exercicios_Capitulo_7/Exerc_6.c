/*6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. 
Ao final, imprima a nova string e o número de vogais que ela possui.*/

#include <stdio.h>
#define TAM 30

int main(void){
    char str[TAM];
    char cara;

    printf("Digite uma string: ");
    gets(str);
    //contar vogais
    char vogais[] = "aeiou";
    int cont = 0;
    int i = 0;
    while(str[i] != '\0'){
        for(int j = 0; vogais[j] != '\0'; j++){
            if(str[i] == vogais[j]){
                cont++;
            }
        }
        i++;
    }

    printf("Entre com uma vogal ou consoante: ");
    cara = getchar();

    i = 0;//trocar letras
    while(str[i] != '\0'){
        int flag = 0;
        for(int j = 0; vogais[j] != '\0'; j++){
            if(str[i] == vogais[j]){
                flag = 1;
            }
        }
        if(flag == 1){
            str[i] = cara;
        }
        i++;
    }

    printf("string: %s.\nQuatidade de vogais %d\n",str,cont);
    return 0;
}