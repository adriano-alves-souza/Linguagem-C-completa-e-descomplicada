/*11) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula. 
Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#define TAM 30
int main(void){
    char str[TAM];

    printf("Digite uma string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 32;
    }

    puts(str);
    return 0;
}