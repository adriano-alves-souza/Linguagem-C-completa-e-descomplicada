/*21) Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.*/
#include <stdio.h>

int main(void){
    int n, i,maior,cont,valor;
    printf("Quantos numeros seram digitados: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        if(i == 1){
            maior = valor;
            cont = 1;
        }
        else{
            if(maior < valor){
                maior = valor;
                cont = 1;
            }else if(maior == valor){
                cont += 1;
            }
        }
    }

    printf("Maior valor digitado %d\nQuantidade de vezes digitados %d\n",maior,cont);
    return 0;
}