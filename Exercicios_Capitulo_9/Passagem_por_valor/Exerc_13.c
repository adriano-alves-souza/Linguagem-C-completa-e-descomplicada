/*13) Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o somatório de 1 até n: 1 + 2 + 3 + ... + n.*/

#include <stdio.h>
int somatorio(int n);
int main(void){
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("O somatorio é %d\n", somatorio(num));
    return 0;
}

int somatorio(int n){
    if(n == 0){
        return 0;
    }else{
        return n + somatorio(n - 1);
    }
}