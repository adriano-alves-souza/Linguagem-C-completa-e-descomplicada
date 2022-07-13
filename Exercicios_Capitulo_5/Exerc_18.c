/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.*/
#include <stdio.h>

int main(void){
    int n, i,primo = 0;

    printf("Digite um inteiro maior do que 1: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            primo++;
        }
    }

    if(primo == 2){
        printf("O numero %d é primo.\n", n);
    }else{
        printf("O numero %d não é primo.\n", n);
    }
    return 0;
}