/*6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (índice de massa corporal) dessa pessoa: IMC = peso/(altura²)*/

#include <stdio.h>

float calculoIMC(float peso, float altura);
int main(void){
    float peso, altura,imc;

    printf("IMC.\n");
    printf("Digite o peso em KG: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros:");
    scanf("%f", &altura);

    imc = calculoIMC(peso,altura);
    printf("Seu imc e %f", imc);
    return 0;
}

float calculoIMC(float peso, float altura){
    return peso / (altura * altura);
}