/*14) Crie uma enumeração representando os itens de uma lista de compras. Agora,
escreva um programa que leia um valor inteiro do teclado e exiba o nome do item
comprado e o seu preço.*/

#include <stdio.h>
enum lista{ARROZ=1,FEIJAO,MACARAO,SABAO,MILHO,FUBA,LEITE};
int main(void){
    enum lista produto;
    float preco[] = {26.50,7.50,3.25,11.10,5.20,2.40,10.00};

    printf("item: ");
    scanf("%d", &produto);
    switch (produto){
        case 1:
            printf("Arroz: %fR$", preco[produto-1]);
        break;
        case 2:
            printf("Feijão: %fR$", preco[produto-1]);
        break;
        case 3:
            printf("Macarao: %fR$", preco[produto-1]);
        break;
        case 4:
            printf("Sabão: %fR$", preco[produto-1]);
        break;
        case 5:
            printf("Milho: %fR$", preco[produto-1]);
        break;
        case 6:
            printf("Fubá: %fR$", preco[produto-1]);
        break;
        case 7:
            printf("Leite: %fR$", preco[produto-1]);
        break;
    }
    return 0;
}