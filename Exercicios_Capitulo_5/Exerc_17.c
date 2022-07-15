/*17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>

int main(void){
    int i,j,n,x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    x = 1;
    for(i = 1; i <= n; i++){
        for(j = x; j <= (x + i -1); j++){
            printf("%d ",j);
        }
        printf("\n");
        x = j;
    }
    return 0;
}