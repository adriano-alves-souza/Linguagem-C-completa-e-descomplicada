/*7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/
#include <stdio.h>

int main(void){
    float real, cotacao,dolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotação: ");
    scanf("%f", &cotacao);

    dolar = real / cotacao;
    printf("%f reais são %f dolares\n",real,dolar);
    return 0;
}