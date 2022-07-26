/*2) Crie uma função recursiva que receba um número inteiro N e retorne o somatório
dos números de 1 a N.*/

#include <stdio.h>

int somatorio(int n);

int main(void){
    int n;

    printf("Digite: ");
    scanf("%d", &n);

    printf("O somatorio de 1 ate %d é %d\n",n,somatorio(n));

    return 0;
}
int somatorio(int n){
    if(n == 1){
        return n;
    }else{
        return n + somatorio(n-1);
    }
}