/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. 
Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.*/

#include <stdio.h>
#define TAM 10
int main(void){
    int i,a[TAM],b[TAM],c[TAM];

    printf("Vetor A.\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Vetor B.\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < TAM; i++){
        c[i] = a[i] - b[i];
    }

    printf("Vetor C.\n");
    for(i = 0; i < TAM; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}