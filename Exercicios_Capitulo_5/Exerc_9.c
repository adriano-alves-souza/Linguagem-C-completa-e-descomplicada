/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>

int main(void){
    int i;
    float maior,menor,n;
    printf("Digite 10 numeros\n");
    for(i = 1; i <= 10; i++){
        printf("Valor %d: ",i);
        scanf("%f", &n);
        if(i == 1){
            maior = n;
            menor = n;
        }else{
            if(maior < n){
                maior = n;
            }
            if(menor > n){
                menor = n;
            }
        }
    }

    printf("Menor valor digitado %f\nMaior valor digitado %f\n", menor, maior);
    return 0;
}