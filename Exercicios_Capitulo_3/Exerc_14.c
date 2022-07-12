/*14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.*/
#include <stdio.h>

int main(void){
    char l1,l2;
    printf("Digite uma letra maiscula: ");
    scanf("%c", &l1);
    l2 = l1 + 32;
    printf("%c = %c\n",l1,l2);
    return 0;
}