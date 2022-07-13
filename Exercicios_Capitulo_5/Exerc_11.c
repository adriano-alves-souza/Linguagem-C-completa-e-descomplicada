/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. 
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
#include <stdio.h>

int main(void){
    int i, n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}