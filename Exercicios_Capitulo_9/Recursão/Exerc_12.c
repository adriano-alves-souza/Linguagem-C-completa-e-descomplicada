/*12) Escreva uma função recursiva que receba um valor inteiro em base decimal e o
imprima em base binária.*/

#include <stdio.h>

void decimalBinario(int num);

int main(void){
    int num = 69582;

    decimalBinario(num);
    return 0;
}
void decimalBinario(int num){
    if(num == 1){
        printf("%d", num % 2);
    }else{
        decimalBinario(num / 2);
        printf("%d", num % 2);
    }
}