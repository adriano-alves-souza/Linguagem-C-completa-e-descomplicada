/*14) Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.*/
#include <stdio.h>

int main(void){
    char letter_1,letter_2,letter_3;
    scanf("%c %c %c", &letter_1,&letter_2,&letter_3);
    printf("%c\n%c\n%c",letter_1,letter_2,letter_3);
    return 0;
}