/*14) Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/
#include <stdio.h>

int main(void){
    int num,r1,r2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    r1 = (num % 3 == 0 || num % 5 == 0);
    r2 = (num % 3 == 0 && num % 5 == 0);
    if(r1 && !r2){
        printf("%d é divisivel por 5 ou 3 é não pelos dois.\n", num);
    }
    return 0;
}