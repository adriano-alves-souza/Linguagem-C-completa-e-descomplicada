/*5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/
#include <stdio.h>

int main(void){
    int idade, ano,nasc;
    printf("Digite sua idade e o ano atual: ");
    scanf("%d%d", &idade,&ano);
    nasc = ano - idade;
    printf("O ano do seu nsacimento e %d\n",nasc);
    return 0;
}