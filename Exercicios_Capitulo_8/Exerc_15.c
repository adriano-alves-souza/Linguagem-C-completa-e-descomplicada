/*15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize 
um dos tipos dessa união e exiba em tela o valor do outro tipo.*/

#include <stdio.h>
union tipos{
    int inteiro;
    char real;
};

int main(void){
    union tipos test;
    
    test.real = 'a';
    printf("%d\n",test.inteiro);
    return 0;
}