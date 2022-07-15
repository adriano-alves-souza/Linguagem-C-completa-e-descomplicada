/*8) Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.*/

#include <stdio.h>
#define TAM 10
int main(void){
    float v[TAM];
    int i;

    printf("Digite 10 valores reais.\n");
    for(i = 0; i < TAM; i++){
        printf("valor %d: ", i+1);
        scanf("%f", &v[i]);
    }

    int contNega = 0;
    float somaPosi = 0;
    for(i = 0; i < TAM; i++){
        if(v[i] < 0){
            contNega++;
        }else{
            somaPosi += v[i];
        }
    }

    printf("Quantidade de negativos: %d\nSoma dos numero positivos: %f\n",contNega,somaPosi);
    return 0;
}