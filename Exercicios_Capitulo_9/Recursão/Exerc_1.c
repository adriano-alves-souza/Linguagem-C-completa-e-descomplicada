/*1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1³ + 2³ + ... + n³*/

#include <stdio.h>

int somaCubo(int n);
int main(void){
    int n;

    printf("Digite: ");
    scanf("%d", &n);

    printf("A soma dos primeiros n cubos é %d\n",somaCubo(n));
    return 0;
}

int somaCubo(int n){
    if(n == 1){
        return n;
    }else{
        return (n*n*n) + somaCubo(n - 1);
    }
}