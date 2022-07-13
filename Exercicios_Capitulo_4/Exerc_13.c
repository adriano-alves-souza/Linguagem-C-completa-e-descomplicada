/*13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo).
O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.*/
#include <stdio.h>

int main(void){
    char opcao;
    int x,y;

    printf("operações matemáticas\nAdição: '+'\nSubtração: '-'\nDivisão: '/'\nMultiplicação: '*'\nopção: ");
    opcao = getchar();
    printf("Digite dois numeros: ");
    scanf("%d%d", &x,&y);
    switch (opcao)
    {
    case '+':
        printf(" %d + %d = %d\n", x,y, x+y);
        break;
    
    case '-':
        printf(" %d - %d= %d\n", x,y, x-y);
        break;
    case '/':
        if(y != 0){
            printf(" %d / %d = %f\n", x,y, (float)x/y);
        }else{
            printf("ERRO!!! Imposivel dividir por zero.\n");
        }
        break;
    case '*':
        printf(" %d * %d = %d\n", x,y, x*y);
        break;
    }
    return 0;
}