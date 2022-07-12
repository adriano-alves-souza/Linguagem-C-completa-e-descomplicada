/*15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida,
calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321*/
#include <stdio.h>

int main(void){
    int num,resu = 0;
    printf("Digite um inteiro de 3 digitos: ");
    scanf("%d", &num);
    resu = (num % 10) * 100;
    resu += (num / 10 % 10) * 10;
    resu += (num / 100);
    printf("%d = %d\n", num, resu);

    return 0;
}