/*7) Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.*/
#include <stdio.h>

int main(void){
    char letra;
    scanf("%c", &letra);
    printf("%c = %d",letra, letra);
    return 0;
}