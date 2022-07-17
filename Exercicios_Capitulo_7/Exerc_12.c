/*12) Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#define TAM 30

int main(void){
    char nProduto[TAM];
    float pProduto;
    printf("Nome do produto: ");
    gets(nProduto);
    printf("Preço do produto: ");
    scanf("%f", &pProduto);

    float desco = pProduto * (10.0 / 100.0);
    float aPagar = pProduto - desco;

    printf("Produto: %s\nTotal: %fR$\nValor desconto: %fR$\nValor a pagar: %fR$\n",nProduto,pProduto,desco,aPagar);

    return 0;
}