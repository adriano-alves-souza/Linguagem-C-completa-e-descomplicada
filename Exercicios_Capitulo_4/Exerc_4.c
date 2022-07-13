/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/
#include <stdio.h>

int main(void){
    float salario,prestacao,resu;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    resu = prestacao / salario * 100;
    resu > 20? printf("Empréstimo não concedido.\n"):printf("Empréstimo concedido.\n");
    return 0;
}